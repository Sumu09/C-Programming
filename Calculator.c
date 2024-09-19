#include <stdio.h>
int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("What do you want to do? +, -, * or /:");
    scanf("%c", &operator);

    printf("\nEnter num1:");
    scanf("%lf", &num1);

    printf("\nEnter num2:");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
        result=num1+num2;
        printf("\nResult is: %.2lf", result);
        break;
        case '-':
        result=num1-num2;
        printf("\nResult is: %.2lf", result);
        break;
        case '*':
        result=num1*num2;
        printf("\nResult is: %.2lf", result);
        break;
        case '/':
        result=num1/num2;
        printf("\nResult is: %.2lf", result);
        break;
        default:
        printf("%c is not a valid operator!!", operator);
    }
    return 0;
}