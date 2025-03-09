#include <stdio.h>
// function prototype
int sum(int ,int);

//function definition
int sum(int x,int y){
    printf("The sum is %d\n",x+y);
    return x+y;
}

int main() {
    int a=1,b=2;
    sum(a,b);

    int a1=12,b1=23;
    sum(a1,b1);
    return 0;
}