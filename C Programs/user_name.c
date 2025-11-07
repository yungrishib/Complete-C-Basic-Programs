#include <stdio.h>
#include <conio.h>

void main() {
    char name[50];
    clrscr();
    printf("Enter your name: ");
    gets(name);
    printf("Hello, %s!", name);
    getch();
}