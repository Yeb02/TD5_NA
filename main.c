#include <stdio.h>

#include "exo1.h"

void main () {
    Date* d1;
    d1->day = 8;
    d1->month = 6;
    d1->year = 2021;
    printDate(d1);
    printDate(createDate(2020,11,3))
}
