#include <stdio.h>
#include <conio.h>

void main() {
    float length, width, area;
    clrscr();
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    area = length * width;
    printf("Area of rectangle = %.2f", area);
    getch();
}