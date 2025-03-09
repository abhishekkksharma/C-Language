// #include <stdio.h>

// int main() {
//     //1. Which of the following is invalid in C?
//     int a=1; int b = a;
//     int v = 3*3;
//     // char dt = ‘21 dec 2020’;  #wrong!
//     return 0;
// }


// 2. What data type will 3.0/8 – 2 return?
// Answer= float   -1.625000
// #include <stdio.h>

// int main() {
//     float a=3.0/8 -2;
//     printf("The value of a is%f\n ",a);
//     return 0;
// }


//3. Write a program to check whether a number is divisible by 97 or not.
// #include <stdio.h>

// int main() {
//     int a=23456;
//     printf("The value of a%97 is %d", a%97); 
//     // If the value is zero the number is divisible by 97
//     return 0;
// }


// 4. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
#include <stdio.h>

int main() {
    int  x=2, y=3, z=3, k=1;
    printf("The value of  3*x/y - z+k is %d\n ", 3*x/y - z+k);
    // 3*x/y - z+k
    // 6/y - z+k
    // 2-z+k
    // -1+k
    // -1+1
    //  0
    return 0;
}