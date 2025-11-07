#include <stdio.h>
#include <conio.h>

void main() {
    float r, area;
    const float pi = 3.1416;
    clrscr();
    printf("Enter radius: ");
    scanf("%f", &r);
    area = pi * r * r;
    printf("Area of circle = %.2f", area);
    getch();
}