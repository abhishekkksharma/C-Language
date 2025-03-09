/*
1. Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.*/
// #include <stdio.h>

// int main() {
//     int length, breadth;
//     printf("Enter the length of the rectangle: ");
//     scanf("%d", &length);
//     printf("Enter the breadth of the rectangle: ");
//     scanf("%d", &breadth);
//     printf("The area of the rectangle is %d\n", length * breadth);
//     return 0;
// }




/*2. Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.*/

#include <stdio.h>

int main() {
    int radius,height;
    float pi=3.14;
    printf("Enter the radius of the cylinder:");
    scanf("%d",&radius);
    printf("Enter the height of the cylinder:");
    scanf("%d",&height);
    printf("The volume of the cylinder with radius %d and height %d is:%f ",radius,height,pi*radius*radius*height);
    return 0;
}



/*3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/

// #include <stdio.h>

// int main() {
//     float celsius;
//     printf("Enter the temp in degree celsius:");
//     scanf("%f",&celsius);
//     printf("The temperature in Fahrenheit:%f", celsius*(9/5)+32);
//     return 0;
// }

/*4. Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/
// #include <stdio.h>

// int main() {
//     int p,r,t;
//     printf("Enter the principal amount:");
//     scanf("%d",&p);
//     printf("Enter the rate of interest:");
//     scanf("%d",&r);
//     printf("Enter the time period(in years):");
//     scanf("%d",&t);
//     printf("The simple interest is:%d",(p*r*t)/100);
//     return 0;
// }