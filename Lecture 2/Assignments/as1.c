#include <stdio.h>

int main(){
    int input,first,second;                 //declares variables
    printf("Insert two-digit number: ");
    scanf("%d", &input);                    //takes 2-digit input from the user

    first = (input / 10) % 10;              //gets the tens digit
    second = input % 10;                    //gets the ones digit

    //prints the result
    printf("Reversed digits: %d%d", second, first);
    
}