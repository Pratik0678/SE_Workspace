#include <stdio.h>

int main() 
{
    int i, num, sum = 0;

    printf("\n Enter 10 numbers:");

    for(i = 1; i <= 10; i++) 
    {
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("Sum = %d", sum);

    return 0;
}