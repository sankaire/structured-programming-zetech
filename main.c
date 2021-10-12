/*
Calculator program that cimputes 2 numbers and return 
sum, diff, product, qutient and modulus

computation:
sum = num1 + num2;
   -diff = num1 - num2;
   -pro = num1 * num2;
   -quot = num1 / num2;
   -mod = num1 % num2;
*/
#include <stdio.h>
#include<stdlib.h>

int main(){

    int num1, num2;
    int sum, diff, pro, mod;
    float quot;

    //assignment
    num1 = 200;
    num2 = 56;

    //calculation
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    quot = (float)num1 / num2;
    mod = num1 % num2;

    //output
    printf("Sum: %i + %i = %i \n",num1, num2, sum);
    printf("Diffrence: %i - %i = %i \n",num1, num2, diff);
    printf("Product: %i * %i = %i \n",num1, num2, pro);
    printf("quatient: %i / %i = %f \n",num1, num2, quot);
    printf("Remainder: %i mod %i = %i \n",num1, num2, mod);

    return 0;
}