#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    if (*p1 > *p2)
        printf("Maximum number = %d\n", *p1);
    else
        printf("Maximum number = %d\n", *p2);

    return 0;
}