#include <stdio.h>

int main(void){
    int val1,val2,result;   //declares variables as integers

    val1 = 87;              //stores the first value
    val2 = 15;              //stores the second value

    result = val1 - val2;   //substracts 15 from 87 and stores the result

    printf("%d substracted from %d is equal to %d.", val2,val1,result); //prints the result message
    return 0;
}