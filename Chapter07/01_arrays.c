#include <stdio.h>

int main() {
    int marks[90]; // reserve space to store 90 integers

    marks[0] = 45;
    marks[1] = 95;
    // we can also fo all the way till marks 89
    printf("Marks 0 and 1 is %d & %d \n",marks[0],marks[1]);
    return 0;
}