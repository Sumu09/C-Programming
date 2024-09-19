#include <stdio.h>
#include <stdbool.h>

int main(){
    // &&(And) Logical Operator:- Checks if two conditions are true\

    float temp=30;
    bool sunny = true; 

    if(temp >=0 && temp <= 30 && sunny)
    {
        printf("The whether is good");
    }else{
        printf("The whether is not good");
    }
    
    }