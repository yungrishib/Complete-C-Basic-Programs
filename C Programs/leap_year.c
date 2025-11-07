#include <stdio.h>
#include <conio.h>

void main() {
    int year;
    clrscr();
    printf("Enter year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year", year);
    else
        printf("%d is not a Leap Year", year);
    getch();
}