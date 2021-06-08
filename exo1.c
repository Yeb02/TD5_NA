#include "exo1.h"
#include <stdio.h>

Date* createDate(int year, int month, int day) {
    Date* p = malloc(sizeof(Date));
    p->year = year;
    p->month = month;
    p->day = day;
    return p;
}

void printDate(Date* date) {
  printf("%d/%d/%d\n",  date->day, date->month, date->year);
}
