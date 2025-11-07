#include <stdio.h>
#include <conio.h>

void main() {
    clrscr();
    printf("Size of int = %d bytes\n", sizeof(int));
    printf("Size of float = %d bytes\n", sizeof(float));
    printf("Size of double = %d bytes\n", sizeof(double));
    printf("Size of char = %d bytes\n", sizeof(char));
    getch();
}