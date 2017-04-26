//
// Created by mrgreen on 26.04.17.
//

#ifndef KYIV_H
#define KYIV_H

#include "main.h"

#define KYIV "Kyiv metro"

#define METRO_LINES 3
#define RED_LINE_STATIONS 18
#define GREEN_LINE_STATIONS 18
#define BLUE_LINE_STATIONS 18

#include <string.h>

struct station red_line[RED_LINE_STATIONS];
struct station green_line[GREEN_LINE_STATIONS];
struct station blue_line[BLUE_LINE_STATIONS];

int init_metro(void);
int list_stations(void);
int find(char*, struct station*);
int create_route(struct station, struct station);

#endif //KYIV_H
