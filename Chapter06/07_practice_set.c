// /*
// 1. Write a program to print the 
// address of a variable. Use this address to get the
// value of the variable*/

// #include <stdio.h>

// int main() {
//     int a=9;
//     int* b= &a;
//     printf("the address of a is %u\n", b);
//     printf("the value of a is %d\n", *b);

//     return 0;
// }

// /*
// 2. Write a program having a variable ‘i’.
// Print the address of ‘i’. Pass this variable to
// a function and print its address. 
// Are these addresses same? Why?
// */

// #include <stdio.h>

// void address(int*); 

// void address(int* a){
//     printf("the adress of i inside function %p\n",a);
// } 

// int main() {
//     int i=45;
//     printf("the adddress of i is %p\n",&i);
//     address(&i);
//     return 0;
// }

// /*
// 3. Write a program to change the 
// value of a variable to ten times of its current
// value.*/

// #include <stdio.h>

// int change_to_thirty_times(int* a);

// int change_to_thirty_times(int* a){
//     *a=*a*10;
// }

// int main() {
//     int x=5;
//     change_to_thirty_times(&x);
//     printf("the value of x when passed through function: %d\n",x);
//     return 0;
// }

// /*
// 4. Write a function and pass 
// the value by reference.
// */
// #include <stdio.h>

// int modifyvalue(int*);
// int modifyvalue(int* x){
//     return *x=10;
// }


// int main() {
//     int a=4;
//     printf("the value of x before function call:%d\n",a);
//     modifyvalue(&a);
//     printf("the value of x after function call:%d\n",a);
//     return 0;
// }




// /*5. Write a program using a function which
//  calculates the sum and average of two
// numbers. Use pointers and print the 
// values of sum and average in main().*/

// /*
// 6. Write a program to print the value
//  of a variable i by using “pointer to pointer” type
// of variable*/

// #include <stdio.h>

// int main() {
//     int a=5;
//     int* ptr = &a;
//     int** ptr2 = &ptr;
//     printf("the adress of a is %u\n", &a);
//     printf("the value of i is %u\n", *ptr);
//     printf("the value of i is %u\n", **ptr2);
//     return 0;
// }



// /*
// 7. Try problem 3 using call by value and verify that it does not change the value of
// the said variable.*/

// #include <stdio.h>

// int change_to_ten_times(int a);

// int change_to_ten_times(int a){
//      a=a*10;
// }

// int main() {
//     int x=5;
//     change_to_ten_times(x);
//     printf("the value of x when passed through function: %d\n",x);
//     return 0;
// }
