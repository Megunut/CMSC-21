/* Calculates the Average Grade from Students using a for loop */

#include <stdio.h>

#define n_students 5

int main(void){
    float grades[n_students], average, sum;
    int i;

    printf("Enter scores in one by one: \n");

    for(i=0; i < n_students; i++){
        printf("Enter grade for Student %d: ", i+1);
        scanf("%f", &grades[i]);
    }

    for(i=0; i < n_students; i++){
        sum += grades[i];
    }

    average = sum / n_students;

    printf("%.2f\n", average);

    return 0;
}