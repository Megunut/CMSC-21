#include <stdio.h>

int main(){
    int input,first,second,third;               //declares variables
    printf("Insert three-digit number: ");
    scanf("%d", &input);                        //takes 3-digit input from the user

    first = (input / 100) % 10;                 //gets the hundreds digit
    second = (input / 10) % 10;                 //gets the tens digit
    third = input % 10;                         //gets the ones digit

    //prints the result
    printf("Reversed digits: %d%d%d", third, second, first);
    
}