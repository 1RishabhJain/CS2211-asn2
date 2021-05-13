// CS2211a 2020
// Assignment number: 2 - Part 1
// Rishabh Jain
// rjain57
// Tuesday October 6th

#include <stdio.h>

void optionMenu(); // Defines function for use in conversions

// Initializes the variables required for conversions
char choice;
float input;
float result;
float FACTOR;

// Conversion between Kilometer and Mile
void kilometer_mile() {
    FACTOR = 1.609344; // Factor to be multiplied/divided by for conversion
    printf("Enter 'K' for Kilometer to Mile or 'M' for Mile to Kilometer:");
    scanf(" %c", &choice);
    if (choice == 'k' || choice == 'K') {
        printf("Enter Kilometer Value:");
        scanf(" %f", &input);
        result = input / FACTOR;
        printf("Result = %f Mile(s)", result);
        optionMenu();
    } else if (choice == 'm' || choice == 'M') {
        printf("Enter Mile Value:");
        scanf(" %f", &input);
        result = input * FACTOR;
        printf("Result = %f Kilometer(s)", result);
        optionMenu();
    } else {
        printf("\nInvalid Entry. Please Try Again\n");
        kilometer_mile();
    }
}

// Conversion between Litre and Gallon
void litre_gallon() {
    FACTOR = 3.785411784; // Factor to be multiplied/divided by for conversion
    printf("Enter 'L' for Litre to Gallon or 'G' for Gallon to Litre:");
    scanf(" %c", &choice);
    if (choice == 'l' || choice == 'L') {
        printf("Enter Litre Value:");
        scanf(" %f", &input);
        result = input / FACTOR;
        printf("Result = %f Gallon(s)", result);
        optionMenu();
    } else if (choice == 'g' || choice == 'G') {
        printf("Enter Gallon Value:");
        scanf(" %f", &input);
        result = input * FACTOR;
        printf("Result = %f Litre(s)", result);
        optionMenu();
    } else {
        printf("\nInvalid Entry. Please Try Again\n");
        litre_gallon();
    }
}

// Conversion between Centimetre and Inch
void centimetre_inch() {
    FACTOR = 2.54; // Factor to be multiplied/divided by for conversion
    printf("Enter 'C' for Centimeter to Inch or 'I' for Inch to Centimeter:");
    scanf(" %c", &choice);
    if (choice == 'c' || choice == 'C') {
        printf("Enter Centimeter Value:");
        scanf(" %f", &input);
        result = input / FACTOR;
        printf("Result = %f Inch(es)", result);
        optionMenu();
    } else if (choice == 'i' || choice == 'I') {
        printf("Enter Inch Value:");
        scanf(" %f", &input);
        result = input * FACTOR;
        printf("Result = %f Centimeter(s)", result);
        optionMenu();
    } else {
        printf("\nInvalid Entry. Please Try Again\n");
        centimetre_inch();
    }
}

// Conversion between Celsius and Fahrenheit
void celsius_fahrenheit() {
    printf("Enter 'C' for Celsius to Fahrenheit or 'F' for Fahrenheit to Celsius:");
    scanf(" %c", &choice);
    if (choice == 'c' || choice == 'C') {
        printf("Enter Celsius Value:");
        scanf(" %f", &input);
        result = ((input / 5 * 9) + 32); // Performs operations on input
        printf("Result = %f Degree(s) Fahrenheit", result);
        optionMenu();
    } else if (choice == 'f' || choice == 'F') {
        printf("Enter Fahrenheit Value:");
        scanf(" %f", &input);
        result = ((input - 32) * 5 / 9); // Performs operations on input
        printf("Result = %f Degree(s) Celsius", result);
        optionMenu();
    } else {
        printf("\nInvalid Entry. Please Try Again\n");
        celsius_fahrenheit();
    }
}

// Menu function
void optionMenu() {
    printf("\n\nSelect Conversion Option (1 - 5):");
    char option;
    scanf(" %c", &option);
    switch (option) { // Switch Case for selecting conversion option
        case '1':
            printf("\nConversion between Kilometer and Mile\n");
            kilometer_mile();
            break;
        case '2':
            printf("\nConversion between Litre and Gallon\n");
            litre_gallon();
            break;
        case '3':
            printf("\nConversion between Centimetre and Inch\n");
            centimetre_inch();
            break;
        case '4':
            printf("\nConversion between Celsius and Fahrenheit\n");
            celsius_fahrenheit();
            break;
        case '5':
            printf("\nThank you for using the converter!\n");
            break;
        default:
            printf("Invalid Choice, Try Again:");
            optionMenu();
    }
}

int main() {
    // Prints welcome message and conversion options
    printf("\nWelcome To Converter Program!\n\n");
    printf("1 - Kilometer and Mile:\n");
    printf("2 - Litre and Gallon:\n");
    printf("3 - Centimetre and Inch\n");
    printf("4 - Celsius and Fahrenheit\n");
    printf("5 - Quit");

    optionMenu(); // Calls the option selection function

    return 0;
}
