#include <stdio.h>
#include <conio.h>

void main() {
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Positive number");
    else if (num < 0)
        printf("Negative number");
    else
        printf("Zero");
    getch();
}