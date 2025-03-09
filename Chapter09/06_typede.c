#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
} Emp;
int main() {
    // typedef int harry;
    // harry a=88;
    // printf("the value of harry is %d \n",a);
    Emp e1;
    e1.code =4511;
    strcpy(e1.name, "Harry");
    e1.salary= 54.44;
    printf("%d %f %s",e1.code,e1.salary,e1.name);
    return 0;
}