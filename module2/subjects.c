#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float sum, percentage;

    // Taking input from user
    printf("Enter marks of 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &sub1);

    printf("Subject 2: ");
    scanf("%f", &sub2);

    printf("Subject 3: ");
    scanf("%f", &sub3);

    printf("Subject 4: ");
    scanf("%f", &sub4);

    printf("Subject 5: ");
    scanf("%f", &sub5);

    // Calculating sum
    sum = sub1 + sub2 + sub3 + sub4 + sub5;

    // Calculating percentage (assuming each subject is out of 100)
    percentage = (sum / 500) * 100;

    // Displaying results
    printf("\nTotal Marks = %.2f", sum);
    printf("\nPercentage = %.2f%%\n", percentage);

    return 0;
}