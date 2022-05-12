#include <stdio.h>

int main(void){
    char road_networks[][9]= {
    {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
    {'A', '1', '1', '0', '0', '0', '1', '0', '0'},
    {'B', '1', '1', '1', '0', '0', '0', '0', '0'},
    {'C', '0', '1', '1', '0', '1', '1', '0', '0'},
    {'D', '0', '0', '0', '1', '1', '0', '0', '0'},
    {'E', '0', '0', '0', '1', '1', '0', '0', '0'},
    {'F', '1', '0', '1', '0', '0', '1', '0', '0'},
    {'G', '1', '0', '0', '1', '0', '0', '1', '0'},
    {'H', '0', '0', '0', '0', '0', '1', '0', '1'},
    };

    //prints the multidimensional array
    for (int row = 0; row < 9; row++){
        for (int column = 0; column < 9; column++){
            if (road_networks[row][column] == 'C' || road_networks[row][column] == 'D'){
                printf("[%c]\t", road_networks[row][column]);
            }
            else{
                printf("%c\t", road_networks[row][column]);
            }
        }
        printf("\n");
    }

    //matrix of station values
    int network_matrix_values[8][8] = {
    {1, 1, 0, 0, 0, 1, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 1},    
    };

    int location,column,run = 1;

    //takes the starting destination
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &location);

    printf("At point: %c\n",road_networks[0][location+1]);

    //loop ends when location becomes Point C or D
    while (1){
        column = 0;
        //user used Point C as starting destination
        if (location == 2){
            location = 2;
            printf("Point C is a charging station.\n");
            printf("point: C arrived to charging station");
            //ends the program
            return 0;
        }
        //user used Point D as starting destination
        else if (location == 3){
            location = 3;
            printf("Point D is a charging station.\n");
            printf("point: D arrived to charging station");
            //ends the program
            return 0;
        }
        else{
            /*  
                Program first checks if current location can proceed directly to Point C or D
                If not, the program iterates through the values of the current location(row)
                It uses a loop until it finds the first instance of 1 in the row
                If a value of 1 is found, the new location is assigned to that point
                The loop ignores the value of 1 if the point is the same with the current location
            */
            while (1){
                //proceed to Point C if possible
                if (network_matrix_values[location][2] == 1){
                    location = 2;
                    printf("Now at point %c\n",road_networks[0][location+1]);
                    printf("point: C arrived to charging station");
                    //ends the program
                    return 0;
                }
                //proceeds to Point D if possible
                else if (network_matrix_values[location][3] == 1){
                    location = 3;
                    printf("Now at point %c\n",road_networks[0][location+1]);
                    printf("point: D arrived to charging station");
                    //ends the program
                    return 0;   
                }
                //a value of 1 is found in the row
                else if (network_matrix_values[location][column] == 1){
                    //ignores if value appears at the same point as the current location
                    if (location == column){
                        ;
                    }
                    //assigns found point as the new location
                    else{
                    location = column;
                    printf("Now at point %c\n",road_networks[0][location+1]);
                    break;
                    }
                }
                else{
                    ;
                }
                //proceeds to the next value in the row
                column++;
            }
        }       
    }
    return 0;
}