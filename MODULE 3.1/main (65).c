#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(choice == 1) {
        printf("Addition = %d", a + b);
    }
    else if(choice == 2) {
        printf("Subtraction = %d", a - b);
    }
    else if(choice == 3) {
        printf("Multiplication = %d", a * b);
    }
    else if(choice == 4) {
        printf("Division = %d", a / b);
    }
    else if(choice == 5) {
        printf("Modulo = %d", a % b);
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}