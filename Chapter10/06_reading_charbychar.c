#include <stdio.h>

int main() {
    char ch;
    FILE *ptr;
    ptr= fopen("harry2.txt","r");
    // this while loop starts execution till it goes to the end of the file EOF.
    //prints all characters and integers or anything which is present inside it one by one in char form
    while(1){
        ch = fgetc(ptr); // when all the content of a file has been read break the loop!
        printf("%c",ch);
        if (ch == EOF){ // EOF- end of file 
            break;
        }
    }
    return 0;
}