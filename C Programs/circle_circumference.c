#include <stdio.h>
#include <conio.h>

void main() {
    float r, c;
    const float pi = 3.1416;
    clrscr();
    printf("Enter radius: ");
    scanf("%f", &r);
    c = 2 * pi * r;
    printf("Circumference = %.2f", c);
    getch();
}