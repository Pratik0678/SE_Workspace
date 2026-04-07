#include <stdio.h>

int main()
{
    float side, area;
    
    printf("Enter the side of the square:");
    scanf("%f",&side);
    
    
    area= side * side;
    
    printf("Area of square = %2f\n",area);
    

    return 0;
}