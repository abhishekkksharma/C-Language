#include <stdio.h>

int main() {
    int marks[5]; // reserve space to store 90 integers
    printf("Enter the value of marks:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The adress of marks at index %d is %u\n",i,&marks[i]);
    }
    return 0;
}