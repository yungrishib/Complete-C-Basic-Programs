#include <stdio.h>
#include <conio.h>

void main() {
    float marks;
    clrscr();
    printf("Enter your percentage: ");
    scanf("%f", &marks);
    if (marks >= 40)
        printf("Pass");
    else
        printf("Fail");
    getch();
}