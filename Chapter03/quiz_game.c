/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F*/
// #include <stdio.h>

// int main() {
//     int marks;
//     printf("Enter the marks obtained: ");
//     scanf("%d", &marks);

//     if (marks >= 90 && marks <= 100) {
//         printf("A\n");
//     }
//     else if (marks >= 80 && marks < 90) {
//         printf("B\n");
//     }
//     else if (marks >= 70 && marks < 80) {
//         printf("C\n");
//     }
//     else if (marks >= 60 && marks < 70) {
//         printf("D\n");
//     }
//     else if (marks >= 50 && marks < 60) {
//         printf("E\n");
//     }
//     else {
//         printf("F\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    char grade;
    int marks;
    printf("Enter the marks obtained: ");
    scanf("%d", &marks);
    if (marks>=90 && marks<=100){
        grade='A';
    }
    else if (marks>=80 && marks<=90){
        grade='B';
    }
    else if (marks>=70 && marks<=80){
        grade='C';
    }
    else if (marks>=60 && marks<=70){
        grade='D';
    }
    else if (marks>=50 && marks<=60){
        grade='E';
    }
    else{
        grade='F';
    }
    printf("%c", grade);

    return 0;
}