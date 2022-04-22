#include <stdio.h>

int main(void){
    //declares integer variables
    int i , j;
    //declares float variables
    float x, y;

    //initializes integer variables
    i =10;
    j = 20;
    //intializes float variables
    x = 43.2892f;
    y = 5527.0f;
    
    //the format strings are replaced by their corresponding value
    //%d specifies that values are printed as decimal integers
    //%f specifies that values are printed as floats
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
    return 0;
}