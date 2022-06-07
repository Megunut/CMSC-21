/* Prints a one-month reminder list */
#include <stdio.h>
#include <String.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line (char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0; 

    for (;;){
        //maximum number of reminders was reached
        if (num_remind == MAX_REMIND){
            printf("-- No space left --\n") ;
            break;
        } 

        //uses scanf to store the day, uses read_line() to store the reminder
        printf("Enter day and reminder: ");
        scanf("%2d", &day); 
        if (day == 0)                   //ends the for loop when 0 is entered
            break;
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN); 

        //compares the  strings and rearranges them by date
        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);       

        strcpy(reminders[i], day_str);  //copies the date into reminder array
        strcat(reminders[i], msg_str);  //concatenates the reminder message with the date

        num_remind++; 
    }

    //prints the date and reminders
    printf ("\nDay Reminder\n") ;
    for (i = 0; i < num_remind; i++) 
        printf(" %s\n", reminders[i]);

    return 0; 
}

//used to store string
int read_line (char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i; 
}