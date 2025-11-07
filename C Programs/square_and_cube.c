#include <stdio.h>
#include <conio.h>

void main() {
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square = %d\n", num * num);
    printf("Cube = %d", num * num * num);
    getch();
}