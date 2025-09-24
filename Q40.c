
// Write a program to find the 1’s complement of a binary number and print it. without array, string
#include <stdio.h>
#include <math.h>
int main(){
    long long int n, num, digit, ones_complement = 0, place_value = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    num = n;
    while (num > 0) {
        digit = num % 10;
        if (digit == 0) {
            ones_complement += place_value;
        }
        place_value *= 10;
        num /= 10;
    }
    printf("%lld\n",ones_complement);
    return 0;
}
