#include <stdio.h>
#include <conio.h>

void main() {
    float F, C;
    clrscr();
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
    C = (F - 32.0) * 5 / 9;
    printf("Temperature in Celsius = %.2f", C);
    getch();
}