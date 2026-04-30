#include<stdio.h>

int main()
{
    int day=7;
    switch(day)
    {
        case 1:
        printf("Today is Monday");
        break;
        case 2:
        printf("Today is Tuesday");
        break;
        case 3:
        printf("Today is wedeensday");
        break;
        case 4:
        printf("Today is Thursday");
        break;
        case 5:
        printf("Today is friend");
        break;
        case 6:
        printf("Today is saturday");
        break;
        case 7:
        printf("Today is sunday");
        break;
        default:
        printf("Your day is not found please input proper values");
        break;
    }
return 0;
}