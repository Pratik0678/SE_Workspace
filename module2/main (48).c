#include <stdio.h>

int main()
{
    int num;
    
    printf("\n press 1 for English \n press 2 for Hindi \n press 3 for Gujarati");
    scanf("%d",&num);//1
    
    if(num==1)
    {
        printf("Your Language is English");
    }
    else if(num==2)
    {
         printf("Your Language is Hindi");
    }
    else if(num==3)
    {
         printf("Your Language is Gujarati");
    }
    else
    {
        printf("Your number is not valid");
    }
    
    return 0;
}
