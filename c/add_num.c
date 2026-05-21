#include <stdio.h>

/**
 * @file add_num.c
 * @brief Program to add two integers entered by the user
 *
 * This program takes two integers from user input,
 * calculates their sum, and displays the result.
 */

/**
 * @brief Main function - entry point of program
 * @return int program exit status (0 for success)
 */
int main() {
    int number1, number2, sum;

    printf("Enter two integers: ");

    // Read two integers from the user
    scanf("%d %d", &number1, &number2);

    // Calculate the sum using + operator
    sum = number1 + number2;

    // Display the result
    printf("%d + %d = %d\n", number1, number2, sum);

    return 0;
}