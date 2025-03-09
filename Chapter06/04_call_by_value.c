#include <stdio.h>

int sum(int,int);
int sum(int a ,int b){
    return a+b;
}

int main() {
    printf("the sum of 1 and 6 is %d",sum(1,6));
    // or we can write it as : 
    // int x=1, y=6;
    // printf("the sum of 1 and 6 is %d",sum(x,y));    
    //(copy of x and y goes to the function for execution)
    return 0;
}