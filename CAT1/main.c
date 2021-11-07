/*--------------------
    Project: Calculator
    Author: Tepela Kerenke
    Licence: MIT
    Date: fri oct 29 2021
    compiler: GCC
---------------------*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //variable declaration
    char ch;
    double num1, num2;

    //promting the user to enter numbers and operation

    printf("Enter an operator (a, s, m, d): ");

    //getting characters
    ch = getchar();

    printf("Enter two intergers: ");

    //storing the numbers
    scanf("%lf %lf", &num1, &num2);

    //computation and output
    switch(ch) {
        case 'a':
        printf("%.1lf + %.1lf = %.1lf \n", num1, num2, num1 + num2);
        break;
        case 's':
        printf("%.1lf - %.1lf = %.1lf \n", num1, num2, num1 - num2);
        break;
        case 'm':
        printf("%.1lf * %.1lf = %.1lf \n", num1, num2, num1 * num2);
        break;
        case 'd':
        printf("%.1lf / %.1lf = %.1lf \n", num1, num2, num1 / num2);
        break;
        default:
        printf("Invalid Input");
    }

  return 0;
}
