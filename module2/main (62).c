#include <stdio.h>

int main()
{
   int num,fd;
   
   printf("enter number:");
   scanf("%d",&num);
   
   int id=num%10;
   
   while(num>0)
   {
       if(num>9)
       {
           num=num/10;
       }
       else
       {
           fd=num;
           num=num/10;
       }
    }
    
    int ans=fd+id;
    printf("%d",ans);
   
   
    return 0;
}
