#include <stdio.h>
#include <conio.h>

void main() {
    float temp;
    clrscr();

    printf("Enter the temperature: ");
    scanf("%f", &temp);

    if (temp >= 40)
        printf("Very Hot");
    else if (temp >= 30)
        printf("Hot");
    else if (temp >= 20)
        printf("Warm");
    else if (temp >= 10)
        printf("Cool");
    else
        printf("Cold");

    getch();
}