#include <stdio.h>

void myfunction(int a, int b)
{
    int c=a+b;
    int d=a*b;
    int e=a/b;
    int f=a%b;
    
    printf("addition of numbers is : %d\n",c);
    printf("multiplications of numbers is : %d\n",d);
    printf("division of numbers is : %d\n",e);
    printf("modulas of numbers is : %d\n",f);
}
int main()
{
    myfunction(100,20);



    return 0;
}