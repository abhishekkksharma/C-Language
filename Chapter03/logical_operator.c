#include <stdio.h>

int main() {
    int a=1, b=1;
    printf("the value of a and b is %d\n",a && b);
    printf("the value of a or b is %d\n",a || b);
    printf("the value of not(a) is %d\n",!a);

    if (a && b){
        printf("both are same\n");
    }
    // is same as writing........
    if (a){        /// nested if 
        if(b){
            printf("both are same\n");
        }
    }
    return 0;
} 
