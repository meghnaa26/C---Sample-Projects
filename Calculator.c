#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main() {

    char calculate_again[4] = "yes";

    while (strcmp(calculate_again, "yes") == 0) {

        float n1, n2, result = 0;
        char o;
        bool valid = true;

        printf("Enter the first number: ");
        scanf("%f", &n1);

        printf("Enter the second number: ");
        scanf("%f", &n2);

        printf("Enter the operation (+,-,*,/,%%): ");
        scanf(" %c", &o);

        if (o == '+') {
            result = n1 + n2;
        } else if (o == '-') {
            result = n1 - n2;
        } else if (o == '*') {
            result = n1 * n2;
        } else if (o == '/') {
            if (n2 == 0) {
                printf("Division by zero is not valid.\n");
                valid = false;
            } else {
                result = n1 / n2;
            }
        } else if (o == '%') {
            if (n2 == 0) {
                printf("Modulus by zero is not valid.\n");
                valid = false;
            } else {
                result = fmod(n1, n2);
            }
        } else {
            printf("Please enter a valid operation.\n");
            valid = false;
        }

        if (valid) {
            printf("The result is %.2f\n", result);
        }

        printf("Do you want to perform more operations (yes/no)? ");
        scanf("%3s", calculate_again);
    }

    printf("Calculator closed.\n");

    return 0;
}
