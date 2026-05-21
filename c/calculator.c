#include <stdio.h>

/**
 * @file calculator.c
 * @brief Simple calculator program in C
 *
 * This program performs basic arithmetic operations:
 * addition, subtraction, multiplication, and division.
 */

/**
 * @brief Adds two integers
 * @param a First number
 * @param b Second number
 * @return Sum of a and b
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Subtracts two integers
 * @param a First number
 * @param b Second number
 * @return Difference of a and b
 */
int subtract(int a, int b) {
    return a - b;
}

/**
 * @brief Multiplies two integers
 * @param a First number
 * @param b Second number
 * @return Product of a and b
 */
int multiply(int a, int b) {
    return a * b;
}

/**
 * @brief Divides two integers
 * @param a Numerator
 * @param b Denominator
 * @return Result of division (integer division)
 */
int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

/**
 * @brief Main function
 *
 * Takes input from user and performs operations
 */
int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nAddition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    printf("Division: %d\n", divide(num1, num2));

    return 0;
}