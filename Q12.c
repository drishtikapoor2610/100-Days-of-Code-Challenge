
#include <stdio.h>
int main() {
   // Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
    int num;
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else {
        if (num < 0) {
            printf("%d is negative.\n", num);
        } else {
            printf("The number is zero.\n");
        }
    }
    return 0;
}
