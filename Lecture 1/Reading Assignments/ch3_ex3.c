/* Adds two fraction */

#include <stdio.h>

int main(void)
{
    //declares integer variables
    int num1, denom1, num2,  denom2, result_num, result_denom;

    //first fraction input
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);             //stores user input in variables using format specifiers

    //second fraction input
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);             //stores user input in variables using format specifiers

    result_num = num1 * denom2 + num2 * denom1; //solves for the numerator
    result_denom = denom1 * denom2;             //solves for the denominator

    //prints the result
    printf("The sum is %d/%d\n", result_num,result_denom);

    return 0;
}