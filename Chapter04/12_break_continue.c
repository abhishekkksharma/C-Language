#include <stdio.h>

int main() {
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            // break; // exit the loop now! (break the loop)
            continue; // skip this iteration now (does not break the loop)
        }
        printf("i is %d\n",i);
    }
    
    return 0;
}