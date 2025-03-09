/*
2. Write a program to take string as an input 
from the user using %c and %s confirm
that the strings are equal.
*/

// #include <stdio.h>

// int main() {
//     char str[6];
//     // scanf("%s",str);
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%c",&str[i]);
//     }
//     printf("%s\n",str);
    
//     return 0;
// }


// /*3. Write your own version of 
// strlen function from <string.h>*/

// #include <stdio.h>

// int strlen(char str[]){
//     int i=0;
//     char c=str[i];
//     while (c!='\0')
//     {
//         c= str[i];
//         i++;
//     }
//     int count= i-1;
//     return count;
// }
// int main() {
//     char str[]= "harry bhai";
//     printf("%d",strlen(str));
//     return 0;
// }

/*
4. Write a function slice() to slice a 
string. It should change the original string such
that it is now the sliced string. 
Take ‘m’ and ‘n’ as the start and ending position
for slice.*/


// #include <stdio.h>

// char* slice(char str[], int m, int n){
//     int i=0,count;
//     char *ptr1 =&str[m];
//     char *ptr2 =&str[n];
//     str=ptr1;
//     str[n]='\0';
//     return str;
// }
// int main() {
//     char str[]= "harry bhai";
//     printf("%s",slice(str, 1, 7));
//     return 0;
// }

/*
5. Write your own version of strcpy
 function from <string.h>*/

// #include <stdio.h>

// int mystrlen(char str[]){
//     int i=0;
//     char c=str[i];
//     while (c!='\0')
//     {
//         c= str[i];
//         i++;
//     }
//     int count= i-1;
//     return count;
// }
 
// void mystrcpy(char target[], char source[] ){
//     for (int i = 0; i < mystrlen(source); i++)
//     {
//         target[i]=source[i];
//     }target[mystrlen(source)]='\0';
    
// }
//  int main() {
//     char source[]= "Harry";
//     char target[300];
//     mystrcpy(target,source);
//     printf("%s %s",source,target);
//     return 0;
//  }

/*6. Write a program to encrypt a string
by adding 1 to the ascii value of its
characters.*/