#include <stdio.h>
void birthday(char name[], int age)
    {
        printf("Happy Birthday %s!!", name);
        printf("\nYou are %d years old!!", age);
    }

int main()
    {
        char name[]="Sumu";
        int age=20;
        birthday(name , age);
    
    return 0;
    }