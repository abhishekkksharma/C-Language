// /*2. Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.
// */

// #include <stdio.h>

// int main() {
//     int a,b,c;
//     printf("Enter tha marks in First subject:");
//     scanf("%d",&a);
//     printf("Enter tha marks in Second subject:");
//     scanf("%d",&b);
//     printf("Enter tha marks in Third subject:");
//     scanf("%d",&c);
//     if (a<33 || b<33 || c<33){
//         printf("You are failed due to less marks in individual subject(s)\n");
//     }
//     else if( (a+b+c)/3<40 ){
//         printf("You are failed due to less overall percentage\n");
//         }
//     else {
//         printf("You have passed");
//     }

//     return 0;
// }



// /*
// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.*/
// #include <stdio.h>

// int main() {
//     float sallary;
//     printf("Enter anual sallary(in Lakhs):");
//     scanf("%f",&sallary);
//     if (sallary>=2.5 && sallary<=5.0){
//         printf("You need to pay a tax of 5%%\n");
//     }
//     else if(sallary>=5.0 && sallary<=10.0) {
//         printf("You need to pay a tax of 20%%\n");
//     }
//     else if (sallary>10){
//         printf("You need to pay a tax of 30%%\n");
//     }
//     else{
//         printf("You don't need to pay tax");
//     }

//     return 0;
// }



// 4. Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.


// #include <stdio.h>

// int main() {
//     int year;
//     printf("Enter the year:");
//     scanf("%d",&year);
//     if ((year%400==0) || (year%4==0 && year%100!=0)){
//         printf("%d is a Leap year.\n",year);
//     }
//     else{
//         printf("%d is Not a Leap year.\n",year);
//     }
//     return 0;
// }


/*
5. Write a program to determine whether a character entered by the user is
lowercase or not.
*/

//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
// check the ascaii value of the chacater  e.g a=97

// #include <stdio.h>

// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c",&ch);
//     printf("The character is %c\n",ch);
//     printf("The character is %d\n",ch);
//     if (ch>=97 && ch<=122){
//         printf("this character is lowercase\n");
//     }
//     else{
//         printf("this character is Not lowecase \n");
//     }
//     return 0;
// }




/*
6. Write a program to find greatest of four numbers entered by the user.
*/
// #include <stdio.h>

// int main() {
//     int a,b,c,d;
//     printf("Enter the value of a:");
//     scanf("%d",&a);
//     printf("Enter tthe value of b:");
//     scanf("%d",&b);
//     printf("Enter the value of c:");
//     scanf("%d",&c);
//     printf("Enter the value of d:");
//     scanf("%d",&d);
//     if (a>b && a>c && a>d){
//         printf("Number A is the greatest\n");
//     }
//     else if (b>a && b>c && b>d){
//         printf("Number B is the greatest\n");
//     }
//     else if (c>a && c>b && c>d){
//         printf("Number C is the greatest\n");
//     }
//     else if (d>a && d>b && d>c){
//         printf("Number D is the greatest\n");
//     }
    
//     return 0;
// }