#include <stdio.h>

int main(){
    int input,tens,ones,special_case = 0;   //declares variables

    printf("Insert two-digit number: ");
    scanf("%d", &input);                    //takes 2-digit input from the user

    //breaks the number into two digits
    tens = (input / 10) % 10;               //gets the tens digit
    ones = input % 10;                      //gets the ones digit

    printf("Number entered in words: ");    //message before printing the result

    //prints the numbers 10-19 in words
    if (tens == 1){
        special_case = 1;                   //tells the code to only print numbers 10-19

        //checks for the digit in the ones place and prints the corresponding number in words.
        if (ones == 0){
            printf("ten");
        }
        else if (ones == 1){
            printf("eleven");
        }
        else if (ones == 2){
            printf("twelve");
        }
        else if (ones == 3){
            printf("thirteen");
        }
        else if (ones == 4){
            printf("fourteen");
        }
        else if (ones == 5){
            printf("fifteen");
        }
        else if (ones == 6){
            printf("sixteen");
        }
        else if (ones == 7){
            printf("seventeen");
        }
        else if (ones == 8){
            printf("eighteen");
        }
        else if (ones == 9){
            printf("nineteen");
        }
    }
    
    //prints numbers 20-99 in words
    if (special_case == 0){

        //checks for the digit in the tens place
        //prints the word of the number in the tens place
        if (tens == 2){
        printf("twenty");
        }
        else if (tens == 3){
            printf("thirty");
        }
        else if (tens == 4){
            printf("forty");
        }
        else if (tens == 5){
            printf("fifty");
        }
        else if (tens == 6){
            printf("sixty");
        }
        else if (tens == 7){
            printf("seventy");
        }
        else if (tens == 8){
            printf("eighty");
        }
        else if (tens == 9){
            printf("ninety");
        }

        //checks for the digit in the ones place
        //prints the word of the number in the ones place
        if (ones == 1){
            printf("-one");
        }
        else if (ones == 2){
            printf("-two");
        }
        else if (ones == 3){
            printf("-three");
        }
        else if (ones == 4){
            printf("-four");
        }
        else if (ones == 5){
            printf("-five");
        }
        else if (ones == 6){
            printf("-six");
        }
        else if (ones == 7){
            printf("-seven");
        }
        else if (ones == 8){
            printf("-eight");
        }
        else if (ones == 9){
            printf("-nine");
        }
        else{
            printf("");
        }
    }
    
    
}