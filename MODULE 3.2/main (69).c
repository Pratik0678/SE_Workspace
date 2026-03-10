#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n After swapping:");
    printf("\n a = %d", a);
    printf("\n b = %d", b);

    return 0;
}