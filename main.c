#include "kyiv.h"

int main() {
    if(init_metro() != 0)
        exit(EXIT_FAILURE);
    printf("Available city metro: \n%s\n\n", KYIV);

    if(list_stations() != 0){
        exit(EXIT_FAILURE);
    }

    char start_station[40] = {0};

    printf("\n\nEnter start station: ");
    char c, i = 0;
    while((c = (char) getchar()) != '\n'){
        start_station[i] = c;
        i++;
    }
    struct station from;
    if(find(start_station, &from) == 0){
        printf("Station not found. Check the name in the list above.");
        exit(EXIT_FAILURE);
    }
    if(!from.works){
        printf("\tStation \"%s\"(%s) is under construction. \n\tTo see the closest station check the list above.", from.station_name, from.line_name);
        return 0;
    }

    printf("\nEnter destination station: ");
    char dest_station[40] = {0};
    int j = 0;
    while((c = (char) getchar()) != '\n'){
        dest_station[j] = c;
        j++;
    }
    struct station to;
    if(find(dest_station, &to) == 0){
        printf("Station not found. Check the name in the list above.");
        exit(EXIT_FAILURE);
    }
    if(!to.works){
        printf("\tStation \"%s\"(%s) is under construction. \n\tTo see the closest check the list above.", to.station_name, to.line_name);
        return 0;
    }
    if(strcmp(from.station_name, to.station_name) == 0){
        printf("Nothing to route! ");
        exit(EXIT_FAILURE);
    }
    printf("\n");
    printf("\t\t\tRoute from \"%s\" (%s) to \"%s\" (%s) is:\n", from.station_name, from.line_name, to.station_name, to.line_name);
    create_route(from, to);
    return 0;

}
