#include <stdio.h>

int main(void){                         //fixed Void to void and added open bracket
    int sum;                            //changed INT to int
    // COMPUTE RESULT                   //changed /* to //
    sum = 25 + 37 - 19;                 //added semicolon at the end of the line
    /* DISPLAY RESULT */                //changed // to */ to fix comment syntax
    printf("The answer is %i\n", sum);  //added comma after string before var(sum)
    return 0;
}