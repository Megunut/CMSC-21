#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 14;
    bool teenager = true;

    if (age >= 13 && age <= 19) 
        teenager = true;
    else
        teenager = false;
}