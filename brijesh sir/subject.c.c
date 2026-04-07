#include <stdio.h>

int main()
{
   int math = 60;
   int chemistry = 80;
   int computer = 98;
   float average;
   
   average = (math+chemistry+computer) /3.0;
   
   printf("Average marks = %2f",average);
   
    return 0;
}