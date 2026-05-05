#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool agecheck;
    printf("Enter your age :");
    scanf("%d",&agecheck);
    
    (agecheck<=18) ? printf("i am adult"):printf("i am child");
    
    return 0;
}