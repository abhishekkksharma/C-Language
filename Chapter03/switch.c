#include <stdio.h>

int main() {
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    switch(a){
// in switch key, if you enter 1 all the cases below that case will be executed.
        case 1: 
        printf("You entered 1\n"); 
        break; // this is used to stop the next case to be executed.
        case 2:
        printf("You entered 2\n");
        break;
        case 3:
        printf("You entered 3\n");
        break;
        case 4:
        printf("You entered 4\n");
        break;
        default:
        printf("Nothing matched:\n");
    }
    return 0;
}