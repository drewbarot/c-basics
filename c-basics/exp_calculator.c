/* Dhrumil Barot
 * 250970442
 * dbarot2@uwo.ca
 */
/* This program is an exponential calculator. */
#include <stdio.h>
// Declarations
int powerfunc(int, int);
float baseval;
int expnt, finalval;
// This is the main portion of the program, which asks for the user input
int main(void) {
    printf("Please enter what you would like the base value to be: ");
    scanf(" %f", &baseval);
    printf("Please enter what you would like the exponent value to be: ");
    scanf(" %d", &expnt);
    // Validates
    while(expnt<0){
        printf("Enter a positive value for the exponent: ");
        scanf(" %d", &expnt);
    }
    // Returns the result
    printf("%.2f raised to the power of %d is %d\n", baseval, expnt, powerfunc(baseval, expnt));    /* call recursive function*/
    return 0;
}
// Recursive
int powerfunc(baseval, expnt) {
    if(expnt == 0)
        return 1;
    if(expnt % 2 == 0) {
        finalval = powerfunc(baseval, expnt/2);
        return finalval*finalval;
    }
    else return baseval*(powerfunc(baseval, expnt-1));
}