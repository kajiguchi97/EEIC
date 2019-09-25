#include <stdio.h>
#include <math.h>
int zeller(int, int, int);

int main() {
    int year = 2016, month = 10, day = 5;
    int w;
    w = zeller(year, month, day);
    printf("%d/%d/%d is ", month, day, year);
    switch(w) {
        case 0: printf("Sat.\n"); break;
        case 1: printf("Sun.\n"); break;
        case 2: printf("Mon.\n"); break;
        case 3: printf("Tue.\n"); break;
        case 4: printf("Wed.\n"); break;
        case 5: printf("Thu.\n"); break;
        case 6: printf("Fri.\n"); break;
    }
    return 0;
}

int zeller (int year, int month, int day){
    int w;
    int h = year / 100;
    int y = year % 100;
    int m = month;
    int d = day;
    int align = 13 * (m+1) / 5;
    w = (y + y/4 + h/4 - 2*h + align + d) % 7;
    return w;
}

