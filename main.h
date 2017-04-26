//
// Created by mrgreen on 26.04.17.
//

#ifndef METRO_MAIN_H
#define METRO_MAIN_H

#include <stdlib.h>
#include <stdio.h>

struct station{
    char *station_name;
    char *line_name;
    int num_code;
    short works;
    struct station *transfer_to;
};

#endif //METRO_MAIN_H
