#include <stdio.h>

int main() 
{
    int n, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    count = n / 2;

    printf("Total even numbers from 1 to %d = %d", n, count);

    return 0;
}