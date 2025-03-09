// /*
// 1. Write a program to print multiplication 
// table of a given number n.
// */
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     for (int i=1; i<=10;i++){
//         printf("%d x %d=%d \n",n,i,n*i);
//     }
//     return 0;
// }


// /*
// 2. Write a program to print 
// multiplication table of 10 in reversed order.
// */

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     for (int i=10; i;i--){
//         printf("%d x %d=%d \n",n,i,n*i);
//     }
//     return 0;
// }

/*
5. Write a program to sum first ten
 natural numbers using while loop.
*/
// #include <stdio.h>

// int main() {
//     int i=1;
//     int sum=0;
//     while(i<=10){
//         sum+=i;
//         i++;
//     }
//     printf("The sum of first 10 natural numbers is %d\n\n",sum);

//     return 0;
// }


/*
6. Write a program to implement program 5 
using ‘for’ and ‘do-while’ loop.
*/

///// using for loop/////
// #include <stdio.h>

// int main() {
//     int i=1;
//     int sum=0;
//     for ( i = 1; i <= 10; i++)
//     {
//         sum+=i;
//     }
//     printf("The sum of first 10 natural numbers is %d\n\n",sum);
//     return 0;
// }

///// using d0-while loop/////
// #include <stdio.h>

// int main() {
//     int i=1;
//     int sum=0;
//     do {
//         sum+=i;
//         i++;
    
//     } while (i<=10);
//     printf("The sum of first 10 natural numbers is %d\n\n",sum);
    
//     return 0;
// }



/*
7. Write a program to calculate 
the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/
// #include <stdio.h>

// int main() {
//     int i;
//     int sum=0;
//     for ( i=1; i <= 10; i++)
//     {
//         sum +=8*i;
//     }
//     printf(" The sum of the numbers occurring in the\n multiplication table of 8 is %d\n",sum);
//     return 0;
// }




/*
8. Write a program to calculate the 
factorial of a given number using a for loop.
*/
// #include <stdio.h>

// int main() {
//     int i;
//     int factorial=1;
//     int number=10;

//     for (i=1; i <= number;i++){
//         factorial *=i;
//     }
//     printf(" The factorial of %d is %d\n",number,factorial);
//     return 0;
// }

/*
9. Repeat 8 using while loop.
*/
// #include <stdio.h>

// int main() {
//     int i=1;
//     int factorial=1;
//     int number=10;
//     while (i<=number)
//     {
//         factorial *=i;
//         i++;
//     }
//     printf(" The factorial of %d is %d\n",number,factorial);
// }

/*
10. Write a program to check whether a 
given number is prime or not using loops.
*/

// #include <stdio.h>

// int main() {
//     int number,i;
//     int isPrime=1;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if (number<=1){
//         isPrime=0;
//     } 
//     else{
//         for ( i=2; i*i<= number; i++)
//         {
//             if (number % i == 0){
//                 isPrime=0;
//                 break;
//             }
//         }
        
//     }
//     if(isPrime){
//         printf("%d is a prime number.\n", number);
//     } 
//     else {
//         printf("%d is not a prime number.\n", number);
//     }


//     return 0;
// }