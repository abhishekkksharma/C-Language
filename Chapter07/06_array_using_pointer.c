#include <stdio.h>

int main() {
    int marks[] = {12,23,54,65};
    int* ptr=&marks[0];
    // int* ptr=marks; //same as previous line
    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n",i , marks[i]); // both work ssame
        printf("The marks at index %d is %d\n",i , *ptr);
        ptr++;
    }
    
    
    return 0;
}