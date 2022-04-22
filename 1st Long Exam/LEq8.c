#include <stdio.h>

int main(void)
{
    int a = 2,b = 3;

    //part a
    printf("\nPart A\n");
    if ( b == 3 )
        if ( a == 2 ){
            printf( "*****" );
            printf("\n");
        }
        else{   
            printf( "-----" );
            printf("\n"); 
        }      
        printf( ">>>>>" );
        printf("\n");
        printf( "<<<<<" );
        printf("\n");
        

    //part b
    printf("\nPart B\n");
    if ( b == 3 )
        if ( a == 2 ){
            printf( "*****" );
            printf("\n");
        }
        else{   
            printf( "-----" );
            printf("\n");       
            printf( ">>>>>" );
            printf("\n");
            printf( "<<<<<" );
            printf("\n");
        }

    //part c
    printf("\nPart C\n");
    if ( b == 3 )
        if ( a == 2 ){
            printf( "*****" );
            printf("\n");
        }
        else{   
            printf( "-----" );
            printf("\n");       
            printf( ">>>>>" );
            printf("\n");
        }
        printf( "<<<<<" );
        printf("\n");
        
   return 0;
}