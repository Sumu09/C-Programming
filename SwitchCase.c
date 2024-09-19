#include<stdio.h>
int main()
{
    char grade;
    printf("Enter your grade:");
    scanf("%c" , &grade);

    switch (grade)
    {   case 'O':
        printf("Congratulations You did Outstanding!!");
        break;
        case 'A':
        printf("Uhuuu..You did perfect");
        break;
        case 'B':
        printf("You did Great");
        break;
        case 'C':
        printf("You did Okay");
        break;
        case 'D':
        printf("You did...umm...Atleast its not an F!, try to do better next time");
        break;
        case 'F':
        printf("You Failed..Work hard and you can passed next time");
        break;
        default:
        printf("Enter a Valid Grade Stupid!!");
    }
}