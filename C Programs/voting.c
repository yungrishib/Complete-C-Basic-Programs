#include <stdio.h>
#include <conio.h>

void main() {
    int age;
    clrscr();
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You can vote.");
    else
        printf("You cannot vote.");
    getch();
}