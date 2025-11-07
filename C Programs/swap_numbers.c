#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, temp;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d", a, b);
    getch();
}