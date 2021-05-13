// CS2211a 2020
// Assignment number: 2 - Part 2
// Rishabh Jain
// rjain57
// Tuesday October 6th

#include <stdio.h>

// Function exp_calc takes parameters base (float) and exponent (int)
float exp_calc(float base, int exponent) {
    // Any number raised to 0, is 1
    if (exponent == 0) {
        return 1;
    }
    // When exponent is greater than 0
    if (exponent > 0) {
        // When exponent is greater than 0
        if (exponent % 2 == 0) {
            return exp_calc(base * base, exponent / 2);
        } else {
            return exp_calc(base * base, ((exponent - 1) / 2)) * base;
        }
        // When exponent is less than 0
    } else {
        exponent = -exponent;
        return (1 / exp_calc(base, exponent));
    }
}

int main() {
    // Initializes base and exponent variables
    float base = -1; // Defines base as -1 to enter while loop
    int exponent;

    printf("\nWelcome To Exponent Calculator!\n");
    // While loop for exponent calculator
    while (base != 0) {
        printf("\nEnter Base:");
        scanf(" %f", &base);

        // Exits the program when base == 0
        if (base == 0) {
            printf("\n0 entered for Base. Exiting Program\n");
        } else {
            printf("Enter Exponent:");
            scanf(" %d", &exponent);
            // Prints a sentence and calls the function with parameters
            printf("\n%f raised to the power of %d is %f\n", base, exponent, exp_calc(base, exponent));
        }
    }
    return 0;
}
