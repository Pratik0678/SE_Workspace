#include <stdio.h>

int main() 
{
    int num,reverse=0;
    
    printf("Enter a number:");
    scanf("%d",&num);
    
    while(num !=0)
    
    {
        int rem =num%10;
        reverse=(reverse*10)+rem;
        num=num /10;
    }
    
    printf("\n Reverse num:%d",reverse);
    

    return 0;
}