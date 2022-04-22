#include <stdio.h>

int main(){
    //declares and initializes variables
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';

    //allows the user to run the program again
    while(cont == 'y'){
        printf("Enter square size: ");
        //asks user for the size of the square
        scanf("%d", &size);     

        for( row = 0 ;row < size ; row++){
            for(column = 0 ; column < size;column++){
                /*row == 0 --> prints the top side of the square
                row == size-1 --> prints the bottom side of the square
                column == 0 --> prints the left side of the square
                column == size-1 --> prints the right side of the square */
                if (row == 0 || row == size-1 || column == 0|| column == size-1){
                    printf("*");
                //fills the inside of the square with whitespaces
                }else{
                    printf(" ");
                }
            }
            printf("\n");   //lets the program proceed to the next row
        }

        //asks the user if they want to run the program again
        printf("Print another square? Enter y or n: ");
        scanf("%c", &cont);

        //ends the program
        if (cont == 'n'){
            break;
        //invalid input when choosing to end the program or not
        }else if (cont != 'y'){
            printf("Not a valid choice. \n");
            //asks the user if they want to run the program again
            printf("Print another square? Enter y/n: ");    
            scanf("%c", &cont);
        }
    }
    return 0;
}
