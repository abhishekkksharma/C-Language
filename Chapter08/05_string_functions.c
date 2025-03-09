#include <stdio.h>
#include <string.h>
int main() {
    char st[]= "Harry";
    char a1[56]= "Harry";
    char a2[56]= " Bhai";

    printf("%d\n", strlen(st));
    char target[30];
    strcpy(target,st); //target now contains "harry"
    printf("%s %s\n",st,target);
    strcat(a1,a2);
    // printf("%s",a1);



    int a = strcmp("deep", "joke"); // Negative value
    printf("%d",a);
    return 0;
}