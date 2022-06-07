/* Checks planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])    //allows command line arguments to be passed in main()
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"}; 
    int i, j;

    for (i = 1; i < argc; i++) { 
        for (j = 0; j < NUM_PLANETS; j++) 
            if (strcmp(argv[i], planets[j]) == 0){          //compares the input with the elements in *planets[]
                printf("%s is planet %d\n", argv[i], j + 1);
                break; 
            }
        //input is not in the array
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]); 
    }

    return 0;
}