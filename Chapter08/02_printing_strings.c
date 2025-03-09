#include <stdio.h>

int main() {
    // char st[]={'a','b','c','\0'}; // A string is a 1-D character array terminated by a null character (‘\0’)
    char st[]= "abc"; //same as doing char st[]={'a','b','c','\0'};  
    // for (int i = 0; i <= 3; i++)
    // {
    //     printf("%c",st[i]);
        
    // }
    printf("%s",st);
    
    return 0;
}