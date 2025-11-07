#include <stdio.h>
#include <conio.h>

void main() {
    int days, months, remaining;
    clrscr();
    printf("Enter total days: ");
    scanf("%d", &days);
    months = days / 30;
    remaining = days % 30;
    printf("%d days = %d month(s) and %d day(s)", days, months, remaining);
    getch();
}