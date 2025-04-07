#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("harry2.txt", "a"); // open in write mode
    int num = 432;
    fprintf(fptr, "%d", num); // print the value in file 
    /*write mode puri file ko khali kar dega fir likhega 
    eg. if the file contains "I Am Abhishek" this program will 
    clear the txt in the file and write the current number 432. 
    to avoid this , open file in append mode 'a'*/
    fclose(fptr);
    return 0;
}