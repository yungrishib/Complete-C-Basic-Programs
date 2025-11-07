#include <stdio.h>
#include <conio.h>

void main() {
    float P, n, r, SI, total;
    clrscr();
    printf("Enter Principal, Time (years), Rate: ");
    scanf("%f %f %f", &P, &n, &r);
    SI = (P * n * r) / 100;
    total = P + SI;
    printf("Simple Interest = %.2f\n", SI);
    printf("Total Amount = %.2f", total);
    getch();
}