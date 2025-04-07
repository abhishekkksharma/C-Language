#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("abhishek.txt", "r"); // open in reading mode 'r' 
    int num;
    fscanf(ptr,"%d",&num);
    printf("the value of num is %d\n",num);

    fscanf(ptr,"%d",&num);
    printf("the value of num is %d\n",num);
    fclose(ptr); // important to always close the file.
    return 0;
}