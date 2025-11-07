#include <stdio.h>
#include <conio.h>

void main() {
    float side, peri;
    clrscr();
    printf("Enter side: ");
    scanf("%f", &side);
    peri = 4 * side;
    printf("Perimeter of square = %.2f", peri);
    getch();
}