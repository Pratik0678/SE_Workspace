
#include<stdio.h>
#include<conio.h>

int main()
{   
    int num;
    
    printf("\n enter 1 for English \n Enter 2 for Hindi \n Enter 3 for Gujarati");
    scanf("%d",&num);
    
    if (num==1)
    {
        printf("Language is English");
    }
    else if(num==2)
    {
        printf("Language is Hindi");
    }
    else if(num==3)
    {
        printf("Language is Gujarati");
    }
    else
    {
        printf("Number not valid");
    }
 
    
    return 0;
}
