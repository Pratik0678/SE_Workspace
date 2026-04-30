#include <stdio.h>

void addnumbers()

{
    int a,b,c;
    printf("Enter a values");
    scanf("%d",&a);
    printf("Enter b values");
    scanf("%d",&b);
    c=a+b;
    printf("Additions of numbers is %d",c);
}
int main()
{
    addnumbers();


    return 0;
}