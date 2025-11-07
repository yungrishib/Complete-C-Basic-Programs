#include <stdio.h>
#include <conio.h>

void main() {
    char ch;
    clrscr();
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Capital letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("Small letter");
    else
        printf("Not an alphabet");
    getch();
}