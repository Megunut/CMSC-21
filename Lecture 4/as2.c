#include <stdio.h>

int main(void){
    int i;
    i = 11;

    printf("while loop:\n");
    while (i < 10) {
        printf("test %d",i);
        i--;
    }

    printf("for loop:\n");
    for (; i < 10;) {
        printf("test %d",i);
        i--;
    }

    printf("do-while loop:\n");
    do {
        printf("test %d", i);
        i--;}
    while (i < 10);
    
    return 0;
}
