#include <stdio.h>

int main() {
    int i=5;
    printf("The value of i is %d \n",i);
    i=i+5; // 10
    printf("The value of i is %d \n",i);
    // i++;  11 ----- prints first and then increments (post increment operator)
    // ++i;  11 ----- increments first and then prints (pre increment operator)
    printf("The value of i is %d \n",i++); // 10 
    printf("The value of i is %d \n",i);  // 11
    return 0;
}