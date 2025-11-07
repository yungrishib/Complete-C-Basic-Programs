#include <stdio.h>
#include <conio.h>

void main() {
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
    getch();
}