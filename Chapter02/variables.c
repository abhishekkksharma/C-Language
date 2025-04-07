#include <stdio.h>

/// //// ///// Type declaration instructors


// int main() {
//     int i =10;
//     int j =i;
//     int a =2,b=3,c=4,d=5;
//     // %d is called format specifier
//     // %d is for int, %f is for float, %c is for char
//     printf("The value of i is %d and value of j is %d\n",i,j);
//     printf("The value of a is %d and value of b is %d\n",a,b);
//     printf("The value of c is %d and value of d is %d\n",c,d);
//     return 0;
// }

//// ////// ///// Arthematic operators 

// the operators can be int, float etc on which the different operations are done
// +addition
// -substraction
// *multiplication
// -division
// %modulus(used to get the remainder)
#include <stdio.h>

int main() {
    int a=6 , b=3;
    int c=a+b;
    int d=6.7; // the value of d is demonished in case of float is written as int 
    printf("The value of d is %d\n",d);
    printf("The vallue of a is %d and value of b is %d and their sum is %d",a,b,c);
    return 0;
}