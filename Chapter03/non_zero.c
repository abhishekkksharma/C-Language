#include <stdio.h>

int main() {
    if (1){
        printf("this if is executed\n"); //Non zero if statements are always true
    }
    if (2345){
        printf("this if is also executed\n");  //Non zero if statements are always true
    }    
    if('c'){
        printf("I character inside if is also excuted\n");
    }
    if (0){
        printf("this if is not executed\n"); 
    }
    return 0;
}