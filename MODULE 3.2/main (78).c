#include <stdio.h>

int main() 
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);


    for(i = 1; i <= n; i++) 
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("\n Sum of odd numbers up to %d = %d", n, sum);

    
    printf("\nMultiplication table up to %d:", n);
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}