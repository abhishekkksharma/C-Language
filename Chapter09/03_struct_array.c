#include <stdio.h>

struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
    }; // semicolon is important
int main() {
    struct employee facebook[100]; // an array of structures
// we can access the data using:
    facebook[1].code = 101;
    facebook[0].code = 100;
    struct employee harry = {100, 71.22, "harry"};
    printf("%d %f %s",harry.code, harry.salary,harry.name);
    return 0;
}