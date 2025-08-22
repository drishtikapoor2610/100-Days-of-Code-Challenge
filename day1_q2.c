// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    // sum
    printf("sum = %d\n", a + b);
    // dif.
    printf("difference = %d\n", a - b);
    // prod.
    printf("product = %d\n", a*b);
    /*
        quotient. 
        if b == 0 then we just print not defined. 
        else print a/b ( the answer. )
    */
   if(b==0){
    printf("Not Defined.\n");
   }else{
        printf("quotient = %d\n",a/b);
   }
    return 0;
}
