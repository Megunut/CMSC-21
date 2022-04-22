#include <stdio.h>

int main(void){
    //declares int variables
    int i,days,start;
    int date = 1;
    
    printf("Enter number of days in month: ");
    scanf("%d",&days);
    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    printf("\n");
    //prints error message if number of days is invalid
    if (days != 31 && days != 30 && days != 28){
            printf("Invalid number of days input!");
    }
    //prints error message if starting day number is invalid
    else if (start > 7 || start < 1){
        printf("Invalid starting day input!");
    }
    //prints calendar
    else{
        for (i = 1;i < days+start;i++){
            //prints whitespace based on the starting day input      
            if (start > i){
                printf("   ");          //prints 3 whitespaces since a date takes 3 spaces
            }        
            //prints the dates
            else{
                printf("%3d", date);    //uses %3 to add spaces between dates
                date++;
            }

            //line breaks every 7 loops
            if (i % 7 == 0){
                printf("\n");
            }
        }       
    }
    return 0;
}