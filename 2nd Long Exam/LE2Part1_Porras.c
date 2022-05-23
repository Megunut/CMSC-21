#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> /* toupper, isalpha */

void scan_word(int occurrences[26]){
    char c;

    //keeps track of how many times each letter has been seen
    //stores the values in the array that was passed in the function
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurrences[toupper(c) - 'A']++;
        }
    }
}

bool is_anagram(int occurrences1[26], int occurences2[26]){
    //using a for loop, checks if each element in the two arrays are identical
    //if there are values that don't match, returns false
    for (int i = 0; i < 26; i++) {
        if (occurrences1[i] != occurences2[i]) {        
            return false;          
        }        
    }
    return true;
}

int main(void) {

    int i,
        same,
        //initializes the two arrays used in checking for anagrams
        occurrences1[26] = {0}, 
        occurrences2[26] = {0};

    printf("Enter first word: ");
    scan_word(occurrences1);        //occurrences1 array is passed in function scan_word

    printf("Enter second word: ");
    scan_word(occurrences2);        //occurrences2 array is passed in function scan_word

    //checks if the values in the two arrays are identical
    //and stores the return value(true or false) in variable same
    same = is_anagram(occurrences1,occurrences2);

    if (same) {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}
