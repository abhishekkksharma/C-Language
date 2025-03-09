// /*1. Write a program using function 
// to find average of three numbers.
// */

// #include <stdio.h>

// int avg();

// int avg(){
//     int a,  b,  c;
//     printf("write the numbers:");
//     scanf(" %d %d %d",&a,&b,&c);
//     printf("The average of %d,%d,%d is %.2f\n",a,b,c,(a+b+c)/3.0);
//     return (a+b+c)/3.0;
// }
// int main() {
//     float x= avg();
//     return 0;
// }



// /*
// 2. Write a function to convert 
// Celsius temperature into Fahrenheit.
// */

// #include <stdio.h>

// void celcius_to_faren(int);

// void celcius_to_faren(int celcius){
//     printf("Enter the temp in celcius:");
//     scanf("%d", &celcius);
//     float fahrenheit;
//     fahrenheit=(9.0/5.0)*celcius +32;
//     printf("The temp in deegree Fahrenheit is: %.2f\n", fahrenheit);
// }

// int main() {
//     // int celcius;
//     // celcius_to_faren(celcius);
//     // also can be writen as
//     celcius_to_faren(0); 

//     return 0;
// }





// /*
// 3. Write a function to calculate force of 
// attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2
// .*/

// #include <stdio.h>

// float force(float);

// float force(float mass){
//     return mass*9.8;
// }


// int main() {
//     int m=45;
//     printf("The force of attraction is %f\n",force(m));
//     return 0;
// }




// /*
// 4. Write a program using recursion to 
// calculate nth element of Fibonacci series.
// */

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on.
//F(n) = F(n-1) + F(n-2) for n ≥ 2
// #include <stdio.h>

// int fibonacci(int);

// int fibonacci(int n){
//     if (n==1 || n==2){
//         return n-1;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);

// }
// int main() {
//     int n=4;
//     printf("the value of fibonacci series at %d is %d ",n, fibonacci(n));
//     return 0;
// }





/*
5. What will the following line produce
 in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);*/

// there are two answers and both are correct 
//4 5 5 and 6 6 4 - this depends on the evaluation order of the compiler wheather it goes from left to right or right to left 



// /*
// 6. Write a recursive function to calculate the 
// sum of first ‘n’ natural numbers.*/

// #include <stdio.h>

// int sum_natural(int);
// int sum_natural(int n){
//     if (n==1){
//         return 1;
//     }
//     // sum_natural(n)=1+2++3+4+5+6....+n-1 +n;
//     // sum_natural(n)= sum(n-1)+n;
//     return sum_natural(n-1)+n;
// }
// int main() {
//     int x=5;
//     printf("the sum of %d natural numbers is %d \n",x,sum_natural(x));
//     return 0;
// }



// /*
// 7. Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * * */
// #include <stdio.h>

// int main() {
//     int n=3;
//     for (int i =0; i<n;i++){
//         // this loop runs from 0 to 2
//         //if i =0 -----> print 1 star
//         //if i =1 -----> print 3 stars
//         //if i =2 -----> print 5 stars
//         // no_of_stars= (2*i+1)

//         // this for loop prints 2*i+1) stars
//         for (int j = 0; j<2*i+1; j++)
//         {
//             printf("*");
//         }
//         // this printf gives a new line 
//         printf("\n");
//     }
//     return 0;
// }