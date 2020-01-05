
/* Dhrumil Barot
 * 250970442
 * dbarot2@uwo.ca
 */
/* This program is part of assignment 2, and makes conversions of standard units.*/

#include <stdio.h>
// Start main
int main(void) {
    // Define variables
    char userInput, converting;
    float km, mile, mtr, feet, cm, in, celsius, fahrenheit;
    // Start the main loop, exit on 5.
    while (userInput != '5') {
        printf("Hello, welcome to the conversion calculator.\n");
        printf("1 for km and mile\n");
        printf("2 for mtr and feet\n");
        printf("3 for cm and in\n");
        printf("4 for Celsius and Fahrenheit\n");
        printf("5 to quit\n");
        scanf(" %c", &userInput);
        // Define the first case, for km to mile
        if (userInput == '1') {
            while (converting != 'K' && converting != 'M') {
                printf("K for km to mile, M for mile to km: ");
                scanf(" %c",
                      &converting);
                // Convert km to mile
                if (converting == 'K') {
                    printf("Enter km value: ");
                    scanf(" %f", &km);
                    mile = km / 1.609;
                    printf("%.2f km = %.2f mile\n", km, mile);
                }
                    // Convert mile to km
                else if (converting == 'M') {
                    printf("Enter mile value: ");
                    scanf(" %f", &mile);
                    km = mile * 1.609;
                    printf("%.2f miles is %.2f kms\n", mile, km);
                }
                    // The invalid case.
                else {
                    printf("Not Valid. Try Again.");
                }
            }
        }
            // The second case for mtr and feet.
        else if (userInput == '2') {
            while (converting != 'M' && converting != 'F') {
                printf("M for mtr to feet, F for feet to mtr: ");
                scanf(" %c", &converting);
                // Convert from mtr to feet
                if (converting == 'M') {
                    printf("Enter meter value: ");
                    scanf(" %f", &mtr);
                    feet = mtr * 3.281;
                    printf("%.2f mtrs is %.2f feet\n", mtr, feet);
                }
                    // Convert from feet to mtr
                else if (converting == 'F') {
                    printf("Enter feet value: ");
                    scanf(" %f", &feet);
                    mtr = feet / 3.281;
                    printf("%.2f feet is %.2f mtrs\n", feet, mtr);
                }
                else {
                    printf("Not Valid. Try Again.");
                }
            }
        }
            // The third case for cm to in
        else if (userInput == '3') {
            while (converting != 'C' && converting != 'I') {
                printf("C for cm to in, I for in to cm: ");
                scanf(" %c", &converting);
                // Converts cm to in
                if (converting == 'C') {
                    printf("Enter centimeter value: ");
                    scanf(" %f", &cm);
                    in = cm / 2.54;
                    printf("%.2f cm = %.2f in\n", cm, in);
                }
                    // Converts in to cm
                else if (converting == 'I') {
                    printf("Enter inch value: ");
                    scanf(" %f", &in);
                    cm = in * 2.54;
                    printf("%.2f in is %.2f cms\n", in, cm);
                }
                else {
                    printf("Not Valid. Try Again.");
                }
            }
        }
            // The fourth case for Celsius and Fahrenheit
        else if (userInput == '4') {
            while (converting != 'C' && converting != 'F') {
                printf("C for Celsius to Fahrenheit, F for Fahrenheit to Celsius: ");
                scanf(" %c", &converting);
                // Converts celsius to fahrenheit
                if (converting == 'C') {
                    printf("Enter Celsius value: ");
                    scanf(" %f", &celsius);
                    fahrenheit = ((1.8 * celsius) + 32);
                    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
                }
                    // Converts fahrenheit to celsius
                else if (converting == 'F') {
                    printf("Enter Fahrenheit value: ");
                    scanf(" %f", &fahrenheit);
                    celsius = ((fahrenheit - 32) * 0.555556);
                    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
                }
                else {
                    printf("Not Valid. Try Again.");
                }
            }
        }
            // The quit case
        else if (userInput == '5') {
            printf("Program terminated\n");
        }
            // The invalid input case.
        else {
            printf("Not Valid. Try Again.");
        }
        // Reset
        converting = 0;
    }
}