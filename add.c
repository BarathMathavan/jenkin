#include <stdio.h>

int main() {
    int num1, num2, sum; // Declare integer variables

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first number from the user and store it in num1
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second number from the user and store it in num2
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the sum to the user
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0; // Indicate successful execution
}