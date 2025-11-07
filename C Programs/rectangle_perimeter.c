#include <stdio.h>
#include <conio.h>

void main() {
    float length, width, peri;
    clrscr();
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    peri = 2 * (length + width);
    printf("Perimeter of rectangle = %.2f", peri);
    getch();
}