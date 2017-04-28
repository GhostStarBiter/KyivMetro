//
// Created by mrgreen on 26.04.17.
//


#include "kyiv.h"



int init_metro(void){

    for(int i = 0; i < 18; i++){
        red_line[i].line_name = "Red Line";
        green_line[i].line_name = "Green Line";
        blue_line[i].line_name = "Blue Line";
    };

    /****************************
     ************RED LINE********
     ****************************/

    travel_red_time[0] = 0;
    travel_red_time[1] = 2;   //to Zhytomyrska
    travel_red_time[2] = 5;   //to Sviatoshyn
    travel_red_time[3] = 7;   //to Nyvky
    travel_red_time[4] = 9;   //to Beresteiska
    travel_red_time[5] = 12;  //to Shuliavska
    travel_red_time[6] = 14;  //to Polytekh
    travel_red_time[7] = 17;  //to Vokzalna
    travel_red_time[8] = 19;  //to Universytet
    travel_red_time[9] = 21;  //to Teatralna
    travel_red_time[10] = 23; //to Khreschatyk
    travel_red_time[11] = 25; //to Arsenalna
    travel_red_time[12] = 27; //to Dnipro
    travel_red_time[13] = 29; //to Hidropark
    travel_red_time[14] = 32; //to Livoberezhna
    travel_red_time[15] = 34; //to Darnytsia
    travel_red_time[16] = 36; //to Chernihivska
    travel_red_time[17] = 39; //to Lisova

    red_line[0].station_name = "Akademmistechko";
    red_line[0].num_code = 110;
    red_line[0].works = 1;
    red_line[0].transfer_to = NULL;

    red_line[1].station_name = "Zhytomyrska";
    red_line[1].num_code = 111;
    red_line[1].works = 1;
    red_line[1].transfer_to = NULL;

    red_line[2].station_name = "Sviatoshyn";
    red_line[2].num_code = 112;
    red_line[2].works = 1;
    red_line[2].transfer_to = NULL;

    red_line[3].station_name = "Nyvky";
    red_line[3].num_code = 113;
    red_line[3].works = 1;
    red_line[3].transfer_to = NULL;

    red_line[4].station_name = "Beresteiska";
    red_line[4].num_code = 114;
    red_line[4].works = 1;
    red_line[4].transfer_to = NULL;

    red_line[5].station_name = "Shuliavska";
    red_line[5].num_code = 115;
    red_line[5].works = 1;
    red_line[5].transfer_to = NULL;


    red_line[6].station_name = "Polytekhnichnyi instytut";
    red_line[6].num_code = 116;
    red_line[6].works = 1;
    red_line[6].transfer_to = NULL;

    red_line[7].station_name = "Vokzalna";
    red_line[7].num_code = 117;
    red_line[7].works = 1;
    red_line[7].transfer_to = NULL;

    red_line[8].station_name = "Universytet";
    red_line[8].num_code = 118;
    red_line[8].works = 1;
    red_line[8].transfer_to = NULL;

    red_line[9].station_name = "Teatralna";
    red_line[9].num_code = 119;
    red_line[9].works = 1;
    red_line[9].transfer_to = &green_line[4];   // transfer to "Zoloti vorota" station

    red_line[10].station_name = "Khreshchatyk";
    red_line[10].num_code = 120;
    red_line[10].works = 1;
    red_line[10].transfer_to = &blue_line[7];   //transfer to "Maidan Nezalezhnosti" station

    red_line[11].station_name = "Arsenalna";
    red_line[11].num_code = 121;
    red_line[11].works = 1;
    red_line[11].transfer_to = NULL;

    red_line[12].station_name = "Dnipro";
    red_line[12].num_code = 122;
    red_line[12].works = 1;
    red_line[12].transfer_to = NULL;

    red_line[13].station_name = "Hidropark";
    red_line[13].num_code = 123;
    red_line[13].works = 1;
    red_line[13].transfer_to = NULL;

    red_line[14].station_name = "Livoberezhna";
    red_line[14].num_code = 124;
    red_line[14].works = 1;
    red_line[14].transfer_to = NULL;

    red_line[15].station_name = "Darnytsia";
    red_line[15].num_code = 125;
    red_line[15].works = 1;
    red_line[15].transfer_to = NULL;

    red_line[16].station_name = "Chernihivska";
    red_line[16].num_code = 126;
    red_line[16].works = 1;
    red_line[16].transfer_to = NULL;

    red_line[17].station_name = "Lisova";
    red_line[17].num_code = 127;
    red_line[17].works = 1;
    red_line[17].transfer_to = NULL;
    /****************************
     ********END RED LINE********
     ****************************/


    /****************************
     **********GREEN LINE********
     ****************************/

    travel_green_time[0] = 0;   //Syrets
    travel_green_time[1] = 2;   //Dorohozhychi
    travel_green_time[2] = 6;   //Lukianivska
    travel_green_time[3] = 8;   //Lvivska Brama
    travel_green_time[4] = 10;  //Zoloti Vorota
    travel_green_time[5] = 12;  //Palats Sportu
    travel_green_time[6] = 14;  //Klovska
    travel_green_time[7] = 17;  //Pecherska
    travel_green_time[8] = 19;  //Dryzhby Narodiv
    travel_green_time[9] = 21;  //Vydubuchi
    travel_green_time[10] = 23;  //Telychka
    travel_green_time[11] = 26; //Slavytuch
    travel_green_time[12] = 28; //Osokorky
    travel_green_time[13] = 31; //Pozniaky
    travel_green_time[14] = 34; //Kharkivska
    travel_green_time[15] = 36; //Vyrlytsia
    travel_green_time[16] = 38; //Boryspilska
    travel_green_time[17] = 41; //Chervonyi Khytir

    green_line[0].station_name = "Syrets";
    green_line[0].num_code = 310;
    green_line[0].works = 1;
    green_line[0].transfer_to = NULL;

    green_line[1].station_name = "Dorohozhychi";
    green_line[1].num_code = 311;
    green_line[1].works = 1;
    green_line[1].transfer_to = NULL;

    green_line[2].station_name = "Lukianivska";
    green_line[2].num_code = 312;
    green_line[2].works = 1;
    green_line[2].transfer_to = NULL;

    green_line[3].station_name = "Lvivska Brama";
    green_line[3].num_code = 313;
    green_line[3].works = 0;
    green_line[3].transfer_to = NULL;

    green_line[4].station_name = "Zoloti Vorota";
    green_line[4].num_code = 314;
    green_line[4].works = 1;
    green_line[4].transfer_to = &red_line[9];  //transfer to "Teatralna" station

    green_line[5].station_name = "Palats Sportu";
    green_line[5].num_code = 315;
    green_line[5].works = 1;
    green_line[5].transfer_to = &blue_line[8];

    green_line[6].station_name = "Klovska";
    green_line[6].num_code = 316;
    green_line[6].works = 1;
    green_line[6].transfer_to = NULL;

    green_line[7].station_name = "Pecherska";
    green_line[7].num_code = 317;
    green_line[7].works = 1;
    green_line[7].transfer_to = NULL;

    green_line[8].station_name = "Druzhby Narodiv";
    green_line[8].num_code = 318;
    green_line[8].works = 1;
    green_line[8].transfer_to = NULL;

    green_line[9].station_name = "Vydubuchi";
    green_line[9].num_code = 319;
    green_line[9].works = 1;
    green_line[9].transfer_to = NULL;

    green_line[10].station_name = "Telychka";
    green_line[10].num_code = 320;
    green_line[10].works = 0;
    green_line[10].transfer_to = NULL;

    green_line[11].station_name = "Slavytuch";
    green_line[11].num_code = 321;
    green_line[11].works = 1;
    green_line[11].transfer_to = NULL;

    green_line[12].station_name = "Osokorky";
    green_line[12].num_code = 322;
    green_line[12].works = 1;
    green_line[12].transfer_to = NULL;

    green_line[13].station_name = "Pozniaky";
    green_line[13].num_code = 323;
    green_line[13].works = 1;
    green_line[13].transfer_to = NULL;

    green_line[14].station_name = "Kharkivska";
    green_line[14].num_code = 324;
    green_line[14].works = 1;
    green_line[14].transfer_to = NULL;

    green_line[15].station_name = "Vyrlytsia";
    green_line[15].num_code = 325;
    green_line[15].works = 1;
    green_line[15].transfer_to = NULL;

    green_line[16].station_name = "Boryspilska";
    green_line[16].num_code = 326;
    green_line[16].works = 1;
    green_line[16].transfer_to = NULL;

    green_line[17].station_name = "Chervonyi Khytir";
    green_line[17].num_code = 327;
    green_line[17].works = 1;
    green_line[17].transfer_to = NULL;

    /****************************
     *******END GREEN LINE*******
     ****************************/

    /****************************
     **********BLUE LINE*********
     ****************************/

    travel_blue_time[0] = 0;
    travel_blue_time[1] = 2;
    travel_blue_time[2] = 4;
    travel_blue_time[3] = 6;
    travel_blue_time[4] = 9;
    travel_blue_time[5] = 11;
    travel_blue_time[6] = 13;
    travel_blue_time[7] = 15;
    travel_blue_time[8] = 17;
    travel_blue_time[9] = 19;
    travel_blue_time[10] = 21;
    travel_blue_time[11] = 22;
    travel_blue_time[12] = 24;
    travel_blue_time[13] = 26;
    travel_blue_time[14] = 28;
    travel_blue_time[15] = 31;
    travel_blue_time[16] = 33;
    travel_blue_time[17] = 35;

    blue_line[0].station_name = "Heroiv Dnipra";
    blue_line[0].num_code = 210;
    blue_line[0].works = 1;
    blue_line[0].transfer_to = NULL;

    blue_line[1].station_name = "Minska";
    blue_line[1].num_code = 211;
    blue_line[1].works = 1;
    blue_line[1].transfer_to = NULL;

    blue_line[2].station_name = "Obolon";
    blue_line[2].num_code = 212;
    blue_line[2].works = 1;
    blue_line[2].transfer_to = NULL;

    blue_line[3].station_name = "Petrivka";
    blue_line[3].num_code = 213;
    blue_line[3].works = 1;
    blue_line[3].transfer_to = NULL;

    blue_line[4].station_name = "Tarasa Shevchenka";
    blue_line[4].num_code = 214;
    blue_line[4].works = 1;
    blue_line[4].transfer_to = NULL;

    blue_line[5].station_name = "Kontraktova Ploshcha";
    blue_line[5].num_code = 215;
    blue_line[5].works = 1;
    blue_line[5].transfer_to = NULL;

    blue_line[6].station_name = "Poshtova Ploshcha";
    blue_line[6].num_code = 216;
    blue_line[6].works = 1;
    blue_line[6].transfer_to = NULL;

    blue_line[7].station_name = "Maidan Nezalezhnosti";
    blue_line[7].num_code = 217;
    blue_line[7].works = 1;
    blue_line[7].transfer_to = &red_line[10];   // transfer to "Khreshchatyk" station

    blue_line[8].station_name = "Ploshcha Lva Tolstoho";
    blue_line[8].num_code = 218;
    blue_line[8].works = 1;
    blue_line[8].transfer_to = &green_line[5];

    blue_line[9].station_name = "Olimpiiska";
    blue_line[9].num_code = 219;
    blue_line[9].works = 1;
    blue_line[9].transfer_to = NULL;

    blue_line[10].station_name = "Palats \"Ukraina\"";
    blue_line[10].num_code = 220;
    blue_line[10].works = 1;
    blue_line[10].transfer_to = NULL;

    blue_line[11].station_name = "Lubidska";
    blue_line[11].num_code = 221;
    blue_line[11].works = 1;
    blue_line[11].transfer_to = NULL;

    blue_line[12].station_name = "Demiivska";
    blue_line[12].num_code = 222;
    blue_line[12].works = 1;
    blue_line[12].transfer_to = NULL;

    blue_line[13].station_name = "Holosiivska";
    blue_line[13].num_code = 223;
    blue_line[13].works = 1;
    blue_line[13].transfer_to = NULL;

    blue_line[14].station_name = "Vasylkivska";
    blue_line[14].num_code = 224;
    blue_line[14].works = 1;
    blue_line[14].transfer_to = NULL;

    blue_line[15].station_name = "Vystavkovyi Tsentr";
    blue_line[15].num_code = 225;
    blue_line[15].works = 1;
    blue_line[15].transfer_to = NULL;

    blue_line[16].station_name = "Ipodrom";
    blue_line[16].num_code = 226;
    blue_line[16].works = 1;
    blue_line[16].transfer_to = NULL;


    blue_line[17].station_name = "Teremky";
    blue_line[17].num_code = 227;
    blue_line[17].works = 1;
    blue_line[17].transfer_to = NULL;

    /****************************
     *******END BLUE LINE********
     ****************************/
    return 0;
}

int list_stations(void){
    printf("\t:: %s :: \n\t", red_line[0].line_name);
    for(int i = 0; i < RED_LINE_STATIONS; i++){
        printf("%s", red_line[i].station_name);
        red_line[i].transfer_to ? printf("(<->%s)", red_line[i].transfer_to->station_name): printf("");
        if(i < (RED_LINE_STATIONS - 1))
            printf(" - ");
    }
    printf("\n\t:: %s :: \n\t", green_line[0].line_name);
    for(int i = 0; i < GREEN_LINE_STATIONS; i++){
        printf("%s", green_line[i].station_name);
        green_line[i].transfer_to ? printf("(<->%s)", green_line[i].transfer_to->station_name): printf("");
        if(i < (GREEN_LINE_STATIONS -1))
            printf(" - ");
    }
    printf("\n\t:: %s :: \n\t", blue_line[0].line_name);
    for(int i = 0; i < BLUE_LINE_STATIONS; i++){
        printf("%s", blue_line[i].station_name);
        blue_line[i].transfer_to ? printf("(<->%s)", blue_line[i].transfer_to->station_name): printf("");
        if(i < (BLUE_LINE_STATIONS -1))
            printf(" - ");
    }
    return 0;
}

int find(char *start_station, struct station *where){
    for(int i = 0; i < RED_LINE_STATIONS; i++){
        if(strcmp(red_line[i].station_name, start_station) == 0){
            *where = red_line[i];
            return 1;
        }
    }
    for(int i = 0; i < GREEN_LINE_STATIONS; i++){
        if(strcmp(green_line[i].station_name, start_station) == 0){
            *where = green_line[i];
            return 1;
        }
    }
    for(int i = 0; i < BLUE_LINE_STATIONS; i++){
        if(strcmp(blue_line[i].station_name, start_station) == 0){
            *where = blue_line[i];
            return 1;
        }
    }
    return 0;
}

int same_line_travel(struct station start, struct station destination, struct station *travel_line, int *line_time){
    signed int direction = start.num_code - destination.num_code;
    int travel_stations = abs(start.num_code - destination.num_code);
    int from_index = start.num_code - travel_line[0].num_code;
    int passed = 0, delta_time = 0, travel_time = 0;
    for(int i = 0; i <= travel_stations; i++){
        if(direction > 0){
            if(i < travel_stations) {
                delta_time = line_time[from_index - i] - line_time[from_index - i - 1];
                travel_time += delta_time;
                if(!travel_line[from_index - i].works){
                    passed++;
                    continue;
                }
                printf("%s - ", travel_line[from_index - i].station_name);
            }
            else
                printf("%s", travel_line[from_index-i].station_name);
        }
        else
        {
            if(i < travel_stations){
                delta_time = line_time[from_index + i + 1] - line_time[from_index + i];
                travel_time += delta_time;
                if(!travel_line[from_index + i].works){
                    passed++;
                    continue;
                }
                printf("%s - ", travel_line[from_index+i].station_name);
            }
            else
                printf("%s", travel_line[from_index+i].station_name);

        }
    }
    printf("\n\tTravel %d station", travel_stations - passed);
    (travel_stations - passed) > 1 ? printf("s.") : printf(".");
    printf(" Aproximate arriving time: %d min.\n", travel_time);
    return 0;
}

int create_route(struct station from, struct station to){

    /** stations are on the same line **/
    if(strcmp(from.line_name, to.line_name) == 0){
        signed int side = from.num_code - to.num_code;
        int travel_stations = abs(from.num_code - to.num_code);
        if(strcmp(from.line_name, "Red Line") == 0){
            same_line_travel(from, to, &red_line[0], &travel_red_time[0]);
            return 0;
        }
        if(strcmp(from.line_name, "Green Line") == 0){
            same_line_travel(from, to, &green_line[0], &travel_green_time[0]);
            return 0;
        }
        if(strcmp(from.line_name, "Blue Line") == 0){
            same_line_travel(from, to, &blue_line[0], &travel_blue_time[0]);
            return 0;
        }
    }
    else
    /** stations are on the different lines **/
    {
        int passed_red = 0,
            passed_green = 0,
            passed_blue = 0;
        /**=====================================**
         *******START FROM RED LINE***************
         **=====================================**/
        if(strcmp(from.line_name, "Red Line") == 0){
            int transfer_station = 0;
            for(;transfer_station < RED_LINE_STATIONS; transfer_station++)
                if((red_line[transfer_station].transfer_to != NULL) && (strcmp(to.line_name, red_line[transfer_station].transfer_to->line_name) == 0))
                    break;
            int travel_red_stations = abs(from.num_code - red_line[transfer_station].num_code);
            signed int side_on_red = from.num_code - red_line[transfer_station].num_code;
            int from_index = from.num_code - red_line[0].num_code;
            for(int i = 0; i <= travel_red_stations; i++){
                if(side_on_red > 0){
                    if(!red_line[from_index - i].works){
                        passed_red++;
                        continue;
                    }
                    if(i < travel_red_stations)
                        printf("%s - ", red_line[from_index-i].station_name);
                    else
                        printf("%s", red_line[from_index-i].station_name);
                }
                else
                {
                    if(!red_line[from_index + i].works){
                        passed_red++;
                        continue;
                    }
                    if(i < travel_red_stations)
                        printf("%s - ", red_line[from_index+i].station_name);
                    else
                        printf("%s", red_line[from_index+i].station_name);
                }
            }
            printf("\n\tTravel %d station", travel_red_stations - passed_red);
            (travel_red_stations - passed_red) > 1 ? printf("s\n") : printf("\n");
            if(strcmp(red_line[transfer_station].transfer_to->line_name, "Green Line") == 0){
                printf("\n\tTransfer to \"Green line\"\n\n");
                int travel_green_stations = abs(red_line[transfer_station].transfer_to->num_code - to.num_code);

                signed int side_on_green = red_line[transfer_station].transfer_to->num_code - to.num_code;
                int transfer_index = red_line[transfer_station].transfer_to->num_code - green_line[0].num_code;
                for(int i = 0; i <= travel_green_stations; i++){
                    if(side_on_green > 0){
                        if(!green_line[transfer_index - i].works){
                            passed_green++;
                            continue;
                        }
                        if(i < travel_green_stations)
                            printf("%s - ", green_line[transfer_index - i].station_name);
                        else
                            printf("%s", green_line[transfer_index - i].station_name);
                    }
                    else
                    {
                        if(!green_line[transfer_index + i].works){
                            passed_green++;
                            continue;
                        }
                        if(i < travel_green_stations)
                            printf("%s - ", green_line[transfer_index + i].station_name);
                        else
                            printf("%s", green_line[transfer_index + i].station_name);
                    }
                }
                printf("\n\tTravel %d station", travel_green_stations - passed_green);
                (travel_green_stations - passed_green) > 1 ? printf("s\n") : printf("\n");
            }
            if(strcmp(red_line[transfer_station].transfer_to->line_name, "Blue Line") == 0){
                printf("\n\tTransfer to \"Blue line\"\n\n");
                int travel_blue_stations = abs(red_line[transfer_station].transfer_to->num_code - to.num_code);

                signed int side_on_blue = red_line[transfer_station].transfer_to->num_code - to.num_code;
                int transfer_index = red_line[transfer_station].transfer_to->num_code - blue_line[0].num_code;
                for(int i = 0; i <= travel_blue_stations; i++){
                    if(side_on_blue > 0){
                        if(!blue_line[transfer_index - i].works){
                            passed_blue++;
                            continue;
                        }
                        if(i < travel_blue_stations)
                            printf("%s - ", blue_line[transfer_index - i].station_name);
                        else
                            printf("%s", blue_line[transfer_index - i].station_name);
                    }
                    else
                    {
                        if(!blue_line[transfer_index + i].works){
                            passed_blue++;
                            continue;
                        }
                        if(i < travel_blue_stations)
                            printf("%s - ", blue_line[transfer_index + i].station_name);
                        else
                            printf("%s", blue_line[transfer_index + i].station_name);
                    }
                }
                printf("\n\tTravel %d station", travel_blue_stations - passed_blue);
                (travel_blue_stations - passed_blue) > 1 ? printf("s\n") : printf("\n");
            }
        };

        /**=====================================**
         *******START FROM GREEN LINE*************
         **=====================================**/
        if(strcmp(from.line_name, "Green Line") == 0){
            int transfer_station = 0;
            for(;transfer_station < GREEN_LINE_STATIONS; transfer_station++)
                if((green_line[transfer_station].transfer_to != NULL) && (strcmp(to.line_name, green_line[transfer_station].transfer_to->line_name) == 0))
                    break;
            int travel_green_stations = abs(from.num_code - green_line[transfer_station].num_code);

            signed int side_on_green = from.num_code - green_line[transfer_station].num_code;
            int from_index = from.num_code - green_line[0].num_code;
            for(int i = 0; i <= travel_green_stations; i++){
                if(side_on_green > 0){
                    if(!green_line[from_index - i].works){
                        passed_green++;
                        continue;
                    }
                    if(i < travel_green_stations)
                        printf("%s - ", green_line[from_index-i].station_name);
                    else
                        printf("%s", green_line[from_index-i].station_name);
                }
                else
                {
                    if(!green_line[from_index + i].works){
                        passed_green++;
                        continue;
                    }
                    if(i < travel_green_stations)
                        printf("%s - ", green_line[from_index+i].station_name);
                    else
                        printf("%s", green_line[from_index+i].station_name);
                }
            }
            printf("\n\tTravel %d station", travel_green_stations - passed_green);
            (travel_green_stations - passed_green) > 1 ? printf("s\n") : printf("\n");
            if(strcmp(green_line[transfer_station].transfer_to->line_name, "Red Line") == 0){
                printf("\n\tTransfer to \"Red line\"\n\n");
                int travel_red_stations = abs(green_line[transfer_station].transfer_to->num_code - to.num_code);
                signed int side_on_red = green_line[transfer_station].transfer_to->num_code - to.num_code;
                int transfer_index = green_line[transfer_station].transfer_to->num_code - red_line[0].num_code;
                for(int i = 0; i <= travel_red_stations; i++){
                    if(side_on_red > 0){
                        if(!red_line[transfer_index - i].works){
                            passed_red++;
                            continue;
                        }
                        if(i < travel_red_stations)
                            printf("%s - ", red_line[transfer_index - i].station_name);
                        else
                            printf("%s", red_line[transfer_index - i].station_name);
                    }
                    else
                    {
                        if(!red_line[transfer_index + i].works){
                            passed_red++;
                            continue;
                        }
                        if(i < travel_red_stations)
                            printf("%s - ", red_line[transfer_index + i].station_name);
                        else
                            printf("%s", red_line[transfer_index + i].station_name);
                    }
                }
                printf("\n\tTravel %d station", travel_red_stations - passed_red);
                (travel_red_stations - passed_red) > 1 ? printf("s\n") : printf("\n");
            }
            if(strcmp(green_line[transfer_station].transfer_to->line_name, "Blue Line") == 0){
                printf("\n\tTransfer to \"Blue line\"\n\n");
                int travel_blue_stations = abs(green_line[transfer_station].transfer_to->num_code - to.num_code);
                signed int side_on_blue = green_line[transfer_station].transfer_to->num_code - to.num_code;
                int transfer_index = green_line[transfer_station].transfer_to->num_code - blue_line[0].num_code;
                for(int i = 0; i <= travel_blue_stations; i++){
                    if(side_on_blue > 0){
                        if(!blue_line[transfer_index - i].works){
                            passed_blue++;
                            continue;
                        }
                        if(i < travel_blue_stations)
                            printf("%s - ", blue_line[transfer_index - i].station_name);
                        else
                            printf("%s", blue_line[transfer_index - i].station_name);
                    }
                    else
                    {
                        if(!blue_line[transfer_index + i].works){
                            passed_blue++;
                            continue;
                        }
                        if(i < travel_blue_stations)
                            printf("%s - ", blue_line[transfer_index + i].station_name);
                        else
                            printf("%s", blue_line[transfer_index + i].station_name);
                    }
                }
                printf("\n\tTravel %d station", travel_blue_stations - passed_blue);
                (travel_blue_stations - passed_blue) > 1 ? printf("s\n") : printf("\n");
            }
        };
        /**=====================================**
         *******START FROM BLUE LINE**************
         **=====================================**/
        if(strcmp(from.line_name, "Blue Line") == 0){
            int transfer_station = 0;
            for(;transfer_station < BLUE_LINE_STATIONS; transfer_station++)
                if((blue_line[transfer_station].transfer_to != NULL) && (strcmp(to.line_name, blue_line[transfer_station].transfer_to->line_name) == 0))
                    break;
            int travel_blue_stations = abs(from.num_code - blue_line[transfer_station].num_code);
            signed int side_on_blue = from.num_code - blue_line[transfer_station].num_code;
            int from_index = from.num_code - blue_line[0].num_code;
            for(int i = 0; i <= travel_blue_stations; i++){
                if(side_on_blue > 0){
                    if(!blue_line[from_index - i].works){
                        passed_blue++;
                        continue;
                    }
                    if(i < travel_blue_stations)
                        printf("%s - ", blue_line[from_index-i].station_name);
                    else
                        printf("%s", blue_line[from_index-i].station_name);
                }
                else
                {
                    if(!blue_line[from_index + i].works){
                        passed_blue++;
                        continue;
                    }
                    if(i < travel_blue_stations)
                        printf("%s - ", blue_line[from_index+i].station_name);
                    else
                        printf("%s", blue_line[from_index+i].station_name);
                }
            }
            printf("\n\tTravel %d station", travel_blue_stations - passed_blue);
            (travel_blue_stations - passed_blue) > 1 ? printf("s\n") : printf("\n");
            if(strcmp(blue_line[transfer_station].transfer_to->line_name, "Green Line") == 0){
                printf("\n\tTransfer to \"Green line\"\n\n");
                int travel_green_stations = abs(blue_line[transfer_station].transfer_to->num_code - to.num_code);
                signed int side_on_green = blue_line[transfer_station].transfer_to->num_code - to.num_code;
                int transfer_index = blue_line[transfer_station].transfer_to->num_code - green_line[0].num_code;
                for(int i = 0; i <= travel_green_stations; i++){
                    if(side_on_green > 0){
                        if(!green_line[transfer_index - i].works){
                            passed_green++;
                            continue;
                        }
                        if(i < travel_green_stations)
                            printf("%s - ", green_line[transfer_index - i].station_name);
                        else
                            printf("%s", green_line[transfer_index - i].station_name);
                    }
                    else
                    {
                        if(!green_line[transfer_index + i].works){
                            passed_green++;
                            continue;
                        }
                        if(i < travel_green_stations)
                            printf("%s - ", green_line[transfer_index + i].station_name);
                        else
                            printf("%s", green_line[transfer_index + i].station_name);
                    }
                }
                printf("\n\tTravel %d station", travel_green_stations - passed_green);
                (travel_green_stations - passed_green) > 1 ? printf("s\n") : printf("\n");
            }
            if(strcmp(blue_line[transfer_station].transfer_to->line_name, "Red Line") == 0){
                printf("\n\tTransfer to \"Red line\"\n\n");
                int travel_red_stations = abs(blue_line[transfer_station].transfer_to->num_code - to.num_code);
                signed int side_on_red = blue_line[transfer_station].transfer_to->num_code - to.num_code;
                int transfer_index = blue_line[transfer_station].transfer_to->num_code - red_line[0].num_code;
                for(int i = 0; i <= travel_red_stations; i++){
                    if(side_on_red > 0){
                        if(!red_line[transfer_index - i].works){
                            passed_red++;
                            continue;
                        }
                        if(i < travel_red_stations)
                            printf("%s - ", red_line[transfer_index - i].station_name);
                        else
                            printf("%s", red_line[transfer_index - i].station_name);
                    }
                    else
                    {
                        if(!red_line[transfer_index + i].works){
                            passed_red++;
                            continue;
                        }
                        if(i < travel_red_stations)
                            printf("%s - ", red_line[transfer_index + i].station_name);
                        else
                            printf("%s", red_line[transfer_index + i].station_name);
                    }
                }
                printf("\n\tTravel %d station", travel_red_stations - passed_red);
                (travel_red_stations - passed_red) > 1 ? printf("s\n") : printf("\n");
            }
        }
    }
    return 0;
}
