/*1. Create a two-dimensional vector 
using structures in C.
*/
// #include <stdio.h>
// struct vector
// {
//     int i;
//     int j;
// };

// int main() {
//     struct vector v = {1,2};
//     printf("the value of vector is %di + %dj",v.i,v.j);
//     return 0;
// }

/*2. Write a function ‘sumVector’ which 
returns the sum of two vectors passed to it.
The vectors must be two–dimensional.
*/

// #include <stdio.h>
// typedef struct vector{
//     int i;
//     int j;
// }v; ///// replace struct vector = v  
// v sumvector(v v1, v v2){
//     struct vector v3={v1.i +v2.i, v1.j + v2.j};
//     return v3;
// }

// int main() {
//     v v1 = {1,2};
//     v v2 = {5,6};
//     v v3 = sumvector(v1,v2);

//     printf("the value of vector is %di + %dj",v3.i,v3.j);
//     return 0;
// }


/*
4. Write a program to illustrate the 
use of arrow operator → in C*/

// #include <stdio.h>
// typedef struct emp{
//     int salary;
//     float score;

// }Employee;

// int main() {
//     Employee e1;
//     Employee* ptr1= &e1;
//     // (*ptr1).salary =56;
//     // (*ptr1).score =45.3;
//     ptr1->salary=56; // same as above
//     ptr1->score= 45.3;
//     printf("The value of salary is %d and value of score is %.2f.\n",ptr1->salary
//     ,ptr1->score); 
    
//     return 0;
// }

/*
5. Write a program with a structure 
representing a complex number*/