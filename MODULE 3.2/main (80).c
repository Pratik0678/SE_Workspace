#include <stdio.h>

int main() 
{
   int n,a =0,b=1,next;
   printf("Enter the number up to which you want fibonacci series ");
   scanf("%d",&n);
   
   printf("\n Fibonacci series up to %d is:",n);
   
   while(a<=n)
   {
       printf("%d",a);
       next=a+b;
       a=b;
       b=next;
   }
    return 0;
}