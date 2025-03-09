#include <stdio.h>

int main() {
    int i=72;
    int* j= &i; // b is the pointer address to int i (j is an integer pointer)
    int k=67;
    printf("The address of a is %u\n",&i);
    printf("The address of a is %u\n",j);
    printf("The address of a is %u\n",&k);

    printf("the value of address j is %d\n", *j);
    return 0;
}