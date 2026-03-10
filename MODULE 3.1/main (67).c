#include <stdio.h>

int main() {
    int choice;
    float years, days;

    printf("1. Convert Years to Days\n");
    printf("2. Convert Days to Years\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter years: ");
        scanf("%f", &years);
        days = years * 365;
        printf("Days = %.2f", days);
    }
    else if(choice == 2) {
        printf("Enter days: ");
        scanf("%f", &days);
        years = days / 365;
        printf("Years = %.2f", years);
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}