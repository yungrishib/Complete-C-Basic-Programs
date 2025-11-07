#include <stdio.h>
#include <conio.h>

void main() {
    char ch;
    clrscr();
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Vowel");
        else
            printf("Consonant");
    } else {
        printf("Not an alphabet");
    }
    getch();
}