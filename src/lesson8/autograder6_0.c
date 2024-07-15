#include <stdio.h>
#include <stdlib.h>

struct simpledate {
    int day;
    int month;
    int year;
};

static int day_tab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year(pd) /* set day of year from month, day */
struct simpledate *pd;
{
    int leap = pd->year % 4 == 0 && 
        pd->year % 100 != 0 || 
        pd->year % 400 == 0;

    int the_day_of_year = 0;
    int month = pd->month;
    int i = 0;
    for (i=0; i < month; i++) {
        the_day_of_year += (int)day_tab[leap][i];    
    }
    the_day_of_year += (int)pd->day;
    return the_day_of_year;
}

void dump_date(pd) /* print date from year, month, day */
struct simpledate *pd;
{
    /* The date should be in the following format - note that */
    /* The month and day are always two digits with leading zeros */
    printf("%d/%02d/%02d\n", pd->year, pd->month, pd->day);
}

int main(void) {
    void dump_date();
    printf("Playing with structures\n");
    struct simpledate sd;

    sd.year = 2023;
    sd.month = 2;
    sd.day = 11;
    dump_date(&sd);
    printf("Day of year %d\n", day_of_year(&sd));

    sd.year = 2023;
    sd.month = 9;
    sd.day = 15;
    dump_date(&sd);
    printf("Day of year %d\n", day_of_year(&sd));

    sd.year = 2024;
    sd.month = 9;
    sd.day = 15;
    dump_date(&sd);
    printf("Day of year %d\n", day_of_year(&sd));
}