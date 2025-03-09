#include <stdio.h>

int main() {
    // POINTER ARTHEMATIC USING INTEGER POINTER
    // int a=5;
    // int *ptr=&a;
    // printf("the address of a is %u\n",&a);
    // printf("the address of a is %u\n",ptr);
    // ptr++; // increnets by 4 bytes as int takes 4 byte
    // printf("the value of ptr is %u\n",ptr);


    // POINTER ARTHEMATIC USING CHARACTER POINTER
    char a='x';
    char *ptr= &a;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",ptr);
    ptr++; /// increments by 1 byte 
    printf("the value of ptr is %u\n",ptr);

    return 0;
}