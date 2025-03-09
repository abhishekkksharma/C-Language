// /*
// 1. Create an array of 10 numbers. Verify using 
// pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer 
// pointing to the first element of the
// array*/

// #include <stdio.h>

// int main() {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int *ptr= arr;
//     printf("The value of ptr is %u and after incrementing by 2:%d",*ptr,(*ptr+2));
//     return 0;
// }



// /*3. Write a program to create an array of 10 
// integers and store multiplication table of
// 5 in it.
// */

// #include <stdio.h>

// int main() {
//     int arr[10];
//     for (int i = 1; i <= 10; i++)
//     {
//         arr[i]=5*(i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("the value of 5 x %d = %d\n",i+1,arr[i]);

//     }
//     return 0;
// }


// /*
// 4. Repeat problem 3 for a general input provided by the user using scanf.
// */

// #include <stdio.h>

// int main() {
//     int num;
//     int arr[10];
//     printf("Enter a number:");
//     scanf("%d",&num);
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i]= num *(i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d x %d = %d\n",num,i+1,arr[i]);
//     }
    
    
//     return 0;
// }



/*5. Write a program containing a function which
reverses the array passed to it.
*/

// #include <stdio.h>
 
// void printarray(int a[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf("\n");
    
// }
// void reverse(int arr[], int n){
//     int temp;
//     for (int i = 0; i < (n/2); i++)
//     {
//         temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
    
// }
// int main() {
//     int arr[]={1,2,3,4,5,6};
//     printarray(arr,6);
//     reverse(arr,6);
//     printarray(arr,6);
//     return 0;
// }



// /*6. Write a program containing functions which
// counts the number of even
// integers in an array.*/
// #include <stdio.h>
// int even(int arr[],int n){
//     int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]%2==0)
//         {
//             count+=1;
//         }
        
//     }
//     return count;
// }

// int main() {
//     int a[]={1,2,3,4,5,6,7,8,9,10};
//     printf("The number of even integers is: %d",even(a,10));
//     return 0;
// }


