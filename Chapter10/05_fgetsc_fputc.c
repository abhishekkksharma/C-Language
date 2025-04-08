#include <stdio.h>

int main() {
    FILE *ptr;
    ptr= fopen("harry2.txt", "a");
    // char c= fgetc(ptr); // used to read a character from file
    // printf("%c",c);

    fputc('c', ptr); // used to write in a file(deltes all content and then writes depending on whether it is in wite mode or append mode)
    fclose(ptr);
    return 0;
}