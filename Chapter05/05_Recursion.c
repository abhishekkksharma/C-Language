#include <stdio.h>

int factorial(int);

    // factorial(5)= 5 x 4 x 3 x 4 x 1
    // factorial(4)= 4 x 3 x 4 x 1
    // factorial(n)= 1 x 2 x 3 x .... x (n-1) x n
    // factorial(n-1)= 1 x 2 x 3 x ....x (n-1)
    // factorial(n)= factorial(n-1) x n
int factorial(int n){
    if (n==1 || n==0){ // base case
        return 1;
    }
    // factorial(n)= factorial(n-1) x n
    return n*factorial(n-1); // recursive function
}
int main() {
    int a=7;
    printf("The factorial of %d is %d",a,factorial(a));
    return 0;
}