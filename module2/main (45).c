#include <stdio.h>

int main()
{
    int age;
    
    printf("enter your age");
    scanf("%d",&age);
    
    if (age>=18)
    {
        printf("\n Eligible to vote");
        
        if(age>=60)
        {
            printf("\n Senior citizen");
        }
        else
        {
            printf("\n Young Age");
        }
    }
    else
    {
        printf("Not Eligible Vote");
    }
    return 0;
}
