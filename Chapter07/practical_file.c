// /*Install C compiler (GCC/Code::Blocks), set up IDE,
// compile and run
// the first &quot;Hello, World!&quot; program.*/
// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// /*Write a Program to show the use to input
//  (Scanf)/output (Printf)
// statements and block structure of 
// C-program by highlighting the
// features of &quot;stdio.h&quot;.*/
// #include <stdio.h>

// int main() {
//     int x;
//     printf("Enter a number:");
//     scanf("%d",&x);
//     printf("You entered: %d",x);
//     return 0;
// }

// /*Write a program to add two numbers and display the sum.*/
// #include <stdio.h>

// int main() {
//     int x,y;
//     printf("Enter two number:");
//     scanf("%d %d",&x,&y);
//     printf("The sum is: %d",x+y);
    
//     return 0;
// }

/*Write a program to calculate the area and 
the circumference of a
circle by using radius as the input provided by the user.*/

// #include <stdio.h>

// int main() {
//     int x;
//     float y=3.14;
//     printf("Enter the radius of the circle:");
//     scanf("%d",&x);
//     printf("The circunference of the circle is: %.2f\n",2*y*x);
//     printf("The area of the circle is: %.2f\n",y*x*x);
//     return 0;
// }

// /*
// Write a Program to perform addition, subtraction, 
// division and
// multiplication of two numbers given as input by the user.*/
// #include <stdio.h>

// int main() {
//     int x,y;
//     printf("Enter two number:");
//     scanf("%d %d",&x,&y);
//     printf("The sum is: %d\n",x+y);
//     printf("The diffrence is: %d\n",x-y);
//     printf("The product is: %d\n",x*y);
//     printf("number 1/Number 2 is: %d\n",x/y);
    
//     return 0;
// }

// /*Write a program to evaluate each of the following equations.
// (i) V = u + at (ii) S = ut+1/2at 2 
// (iii) T=2*a+√b+9c (iv) H=√b 2 +p 2*/
// #include <stdio.h>

// int main() {
//     float u,t;
//     printf("Enter the indial velocity and time:");
//     scanf("%f %f",&u,&t);
//     float v=u + 10*t;
//     printf("The final velocity is: %.2fm/s",v);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     float u,t;
//     float a=10;
//     printf("Enter the indial velocity and time:");
//     scanf("%f %f",&u,&t);
//     float s;
//     s= u*t + 0.5*a*t*t;
//     printf("The total distance is: %.2fm",s);
//     return 0;
// }
// (iii) T=2*a+√b+9c
// #include <stdio.h>
// #include <math.h>
// int main() {
//     float t,a,b,c;
//     printf("enter the values of a,b,c:");
//     scanf("%f %f %f",&a,&b,&c);
//     t= 2*a + sqrt(b +9*c);
//     printf("The value of T is :%f",t);
//     return 0;
// }

// (iv) H=√b 2 +p 2
// #include <stdio.h>
// #include <math.h>
// int main() {
//     float h,b,p;
//     printf("Enter the value of b and p:");
//     scanf("%f %f",&b,&p);
//     h= sqrt(b*b + p*p);
//     printf("The value of h is :%f",h);
//     return 0;
// }


/*
Write a program to swap two variables:
a) By using temporary variable.
b) Without using temporary variable*/

// #include <stdio.h>

// int main() {
//     int a=2,b=4,temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("the value of a=2 and b=4 after swaping is %d , %d.",a,b);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a=10,b=15,c;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("After swaping a and b are: %d ,%d",a,b);
//     return 0;
// }


/*Write a Program to find the greatest among three numbers using:

 Conditional Operator
 If-Else statement*/
// #include <stdio.h>

// int main() {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     int greatest = (a > b && a > c) ? a : (b > c ? b : c);
//     printf("The greatest number is: %d\n", greatest);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a,b,c;
//     printf("Enter three numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b && a>c){
//         printf("%d",a);
//     }else if(b>a && b>c){
//         printf("%d",b);
//     }else if(c>a && c>b){
//         printf("%d",c);
//     }
//     return 0;
// }


/*Write the following programs using switch case statement:
 To check that an input alphabet is vowel or consonant
 To check whether a number is positive, negative or zero*/

// #include <stdio.h>

// int main() {
//     char c;
//     printf("Enter an alphabet: ");
//     scanf("%c", &c);

//     switch(c) {
//         case 'a':
//         case 'A':
//         case 'e':
//         case 'E':
//         case 'i':
//         case 'I':
//         case 'o':
//         case 'O':
//         case 'u':
//         case 'U':
//             printf("%c is a vowel.\n", c);
//             break;
//         default:
//             printf("%c is a consonant.\n", c);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     while (1) {
//         printf("This will run forever!\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     switch ((num > 0) - (num < 0)) {
//         case 1:
//             printf("The number is positive.\n");
//             break;
//         case -1:
//             printf("The number is negative.\n");
//             break;
//         case 0:
//             printf("The number is zero.\n");
//             break;
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>
// int main() {
//     char* ch='  Hello How are you?';
//     int i=0;
//     for (;;){
//         ch=getchar();
//             printf("Hello world");
//             break;
//     }
//     return 0;
// }


// /* 11. Write a program to check a number is Armstrong or not using For
// loop..*/
// #include <stdio.h>

// int main() {
//     int n, original, count = 0, reversed = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);
//     original = n;

//     while (n > 0) {
//         int digit = n % 10; 
//         reversed = reversed * 10 + digit; 
//         count++; 
//         n = n / 10;
//     }

//     printf("Number of digits: %d\n", count);
//     printf("Reversed number: %d\n", reversed);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, sum = 0, i = 1;

//     printf("Enter a positive integer n: ");
//     scanf("%d", &n);

//     while (i <= n) {
//         sum += i;
//         i++;
//     }

//     printf("The sum of the first %d natural numbers is: %d\n", n, sum);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int number, originalNumber, remainder, result = 0, n = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &number);

//     originalNumber = number;

//     for (n = 0; originalNumber != 0; n++) {
//         originalNumber /= 10;
//     }

//     originalNumber = number;

//     for (; originalNumber != 0; originalNumber /= 10) {
//         remainder = originalNumber % 10;
//         result += pow(remainder, n);
//     }

//     if (result == number) {
//         printf("%d is an Armstrong number.\n", number);
//     } else {
//         printf("%d is not an Armstrong number.\n", number);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, firstTerm = 0, secondTerm = 1, nextTerm;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");

//     for (int i = 1; i <= n; i++) {
//         printf("%d, ", firstTerm);
//         nextTerm = firstTerm + secondTerm;
//         firstTerm = secondTerm;
//         secondTerm = nextTerm;
//     }

//     return 0;
// }


/*Write a program to print the following patterns:

a)
*
* *
* * *
* * * *
* * * * *
* * * * * *

b)
               * 
            * *
         * * *
      * * * *
   * * * * *
* * * * * *
*/

// #include <stdio.h>

// int main() {
//     int i, j;
//     int n; 
//     scanf("%d",&n);
    
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int i, j;
//     int n ;
//     scanf("%d",&n);

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n - i; j++) {
//             printf("  ");
//         }
        
//         for (j = 1; j <= i; j++) {
//             printf("* ");
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }

/*Write the program to print the following pattern:

1 2 3 4 5 6
2 4 6 8 10 12
3 6 9 12 15 18
4 8 12 16 20 24
5 10 15 20 25 30
6 12 18 24 30 36*/
// #include <stdio.h>

// int main() {
//     int i, j;
//     int n ;
//     scanf("%d",&n);
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++) {
//             printf("%d ", i * j);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int isPrime(int n) {
//     if (n <= 1) return 0;
//     for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
//     return 1;
// }

// int isArmstrong(int n) {
//     int sum = 0, temp = n, digits = 0;
//     while (temp) { digits++; temp /= 10; }
//     temp = n;
//     while (temp) {
//         sum += pow(temp % 10, digits);
//         temp /= 10;
//     }
//     return sum == n;
// }

// int isPerfect(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n / 2; i++) if (n % i == 0) sum += i;
//     return sum == n;
// }

// int main() {
//     int num;
//     scanf("%d", &num);
//     printf("%d %sPrime\n", num, isPrime(num) ? "" : "not ");
//     printf("%d %sArmstrong\n", num, isArmstrong(num) ? "" : "not ");
//     printf("%d %sPerfect\n", num, isPerfect(num) ? "" : "not ");
//     return 0;
// }


// #include <stdio.h>

// float calculateArea(float radius) {
//     return 3.14159 * radius * radius;
// }

// float calculateCircumference(float radius) {
//     return 2 * 3.14159 * radius;
// }

// int main() {
//     float radius;

//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);

//     printf("Area of the circle: %.2f\n", calculateArea(radius));
//     printf("Circumference of the circle: %.2f\n", calculateCircumference(radius));

//     return 0;
// }
