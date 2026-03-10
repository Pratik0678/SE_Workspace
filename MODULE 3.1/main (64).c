#include <stdio.h>

int main() {
    int choice;
    float r, l, b, h, area;

    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter radius: ");
        scanf("%f", &r);
        area = 3.14 * r * r;
        printf("Area of Circle = %.2f", area);
    }
    else if(choice == 2) {
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        area = l * b;
        printf("Area of Rectangle = %.2f", area);
    }
    else if(choice == 3) {
        printf("Enter base and height: ");
        scanf("%f %f", &b, &h);
        area = 0.5 * b * h;
        printf("Area of Triangle = %.2f", area);
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}