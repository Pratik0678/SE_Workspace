#include <stdio.h>

int main()
{
    int num;
    
    printf("\n press 1 for English \n press 2 for Hindi \n press 3 for Gujarati");
    scanf("%d",&num);//1
    
    switch(num)
    {
       case 1:printf("Your Language is English");
       break;
       
       case 2:printf("Your Language is Hindi");
       break;
       
       case 3:printf("Your Language is Gujarati");
       break;
       
       default:printf("Your number is not valid");
       break;
       
    }
    
    return 0;
}
