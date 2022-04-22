/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
    //declares variables
    int i;
    float x;

    //initializes variables
    i = 40;
    x = 839.21f;

    //NOTE: if a value does not reach specified number of characters it adds spaces
    /*%d prints the value with least amount of space
    %5 prints the value using 5 characters, adds space BEFORE the value 
    %5 prints the value using 5 characters, adds space AFTER the value
    %5.3 prints the value using 5 characters with a minimum of 3 digits, adds space BEFORE the value */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    /*%10.3f prints the value with 3 decimal places using 10 characters, adds spaces BEFORE the value
    %10.3e prints the value in exponential form using 10 character
    %-10g prints the value either in decimal form or exponenential form using 10 characters, adds spaces AFTER the value */
    printf("|%10.3f|%10.3e|%-10g|\n" , x, x, x);
    return 0; 
}