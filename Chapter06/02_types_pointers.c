#include <stdio.h>

int main() {
    char i='A';
    char* j= &i; // b is the pointer address to int i (j is an character pointer)
    float k=5.232;
    float* k1= &k;

    printf("The address of a is %p\n",&i);
    printf("The address of a is %p\n",j);
    printf("The address of a is %p\n",&k);

    printf("the value of address j is %s\n", *j);
    return 0;
}