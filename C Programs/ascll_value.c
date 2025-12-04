#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII value of %c is %d", ch, ch);
}