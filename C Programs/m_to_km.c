#include <stdio.h>
#include <conio.h>

void main() {
    float meter, km;
    clrscr();
    printf("Enter distance in meters: ");
    scanf("%f", &meter);
    km = meter / 1000;
    printf("Distance in kilometers = %.3f", km);
    getch();
}