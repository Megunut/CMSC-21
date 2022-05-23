#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> /* toupper, isalpha */

void scan_word(int *ptr){
    char c;

    //keeps track of how many times each letter has been seen
    //stores the values at the address where the pointer is pointing
    while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            ptr[toupper(c) - 'A']++;        //uses pointer index notation
        }
    }
}

bool is_anagram(int *ptr1, int *ptr2){
    //using a for loop, checks if each element in the two arrays are identical
    //if there are values that don't match, returns false
    for (int i = 0; i < 26; i++) {
        if (*(ptr1 + i) != *(ptr2 + i)) {  //uses pointer/offset notation 
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

        int *ptr1, *ptr2;       //declares pointers
        ptr1 = occurrences1;    //initializes ptr1 with array occurrences1
        ptr2 = occurrences2;    //initializes ptr2 with array occurrences2

    printf("Enter first word: ");
    scan_word(ptr1);           //pointer ptr1 is passed in function scan_word

    printf("Enter second word: ");
    scan_word(ptr2);           //pointer ptr2 is passed in function scan_word

    //checks if the values in the two arrays are identical
    //and stores the return value(true or false) in variable same
    same = is_anagram(ptr1,ptr2);

    if (same) {
        printf("The words are anagrams.\n");
        return 0;
    }
    printf("The words are not anagrams.\n");
    return 0;
}
