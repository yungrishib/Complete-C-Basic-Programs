#include <stdio.h>
#include <conio.h>

void main() {
    float side, area;
    clrscr();
    printf("Enter side: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of square = %.2f", area);
    getch();
}