#include <stdio.h>
#include <math.h>

int main(void)
{
    //declares variables
    int x;
    double check;

    //initializes variables
    double y_old = 1,y_new = 0, tol = 0.00001;

    printf("Insert x value: ");
    scanf("%d", &x);                            //asks user for the value of x
   
    //var(check) is used to check if the loop should continue
    //if check value is less than the tolerance, then the loop ends
    //after an iteration, value of y_new is stored in y_old
    //which will be used in solving for the next value of y_new
    for(check=1; check >= tol; y_old = y_new){
        y_new = (0.5)*(y_old+(x/y_old));        //formula for finding the approximate square root of x
        check = fabs(y_new - y_old);            //uses function fabs to get absolute value
    }

    printf("Final Approximation: %lf", y_old);   //prints Final Approximation as a double
   
    return 0;
}