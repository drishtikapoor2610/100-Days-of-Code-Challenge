
// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>
int main() {
    char binary[65], ones_complement[65];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        if (binary[i] == '0') {
            ones_complement[i] = '1';
        } else if (binary[i] == '1') {
            ones_complement[i] = '0';
        } else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    ones_complement[len] = '\0'; 
    printf("%s\n", ones_complement);
    return 0;
}

