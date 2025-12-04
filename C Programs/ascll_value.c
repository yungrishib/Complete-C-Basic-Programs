#include <stdio.h>

int main()
{
    char ch;
    int ascii;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Character: '%c'  ASCII_Value: %d\n", ch, ch);
    ch++;
    printf("Character: '%c'  ASCII_Value: %d\n", ch, ch);

    printf("Enter a ASCLL: ");
    scanf(" %d", &ascii);

    printf("Character: '%c'  ASCII_Value: %d\n", ascii, ascii);
    ascii++;
    printf("Character: '%c'  ASCII_Value: %d\n", ascii, ascii);
}