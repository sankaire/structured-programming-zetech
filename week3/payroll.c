/*-----------------------------
    Project: Payroll
    Author: Peter Tepela
    Compiler: gcc
    Licence: MIT
    Date: 22/10/2021
    Language: C
----------------------------------
*/
#include <stdio.h>
#include<stdlib.h>

int main(){
    //variable declaration
    char name[100], pin[10];
    int emp_num, hours;
    int normal_pay;
    float overtime_pay, tax, gross, net;
    const int rate = 1000;
    
    //introduce the programme
    printf("\tGitonga\'s factory payroll \n");

    //cupture the inputs
    printf("Emloyee name: ");
    gets(name);
    printf("KRA pin: ");
    gets(pin);
    printf("Employment Number: ");
    scanf("%d", &emp_num);
    printf("Hours worked:");
    scanf("%d", &hours);

    //computation
    if (hours > 40)
    {
        normal_pay = rate * 40;
        overtime_pay = (hours - 40) * 1.5 * rate;
    }
    else {
        normal_pay = rate * hours;
        overtime_pay = 0;
    }
    gross = normal_pay + overtime_pay;
    tax = 0.3 * gross;
    net = gross - tax;
    
    //output the results
    printf("Emloyee Name: %s\n", name);
    printf("Emloyee No: %d\n", emp_num);
    printf("Normal Pay: %d\n", normal_pay);
    printf("Overtime Pay: %.2f\n", overtime_pay);
    printf("Gross income: %.2f\n", gross);
    printf("Tax: %.2f\n", tax);
    printf("Net: %.2f\n", net);

    return 0;
}