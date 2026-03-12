#include <stdio.h>

int main() 
{
  int num, i;
  long factorial =1;
  
  printf("Enter a number:");
  scanf("%d",&num);
  
  for(i=1; i<=num; i++)
  {
      factorial = factorial*i;
  }
  
  printf("factorial of %d =%10d",num,factorial);

    return 0;
}