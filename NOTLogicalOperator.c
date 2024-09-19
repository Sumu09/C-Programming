#include <stdio.h>
#include<stdbool.h>

int main(){

    // !(NOT) logical operator:- Reverses the state of a condition

    //bool sunny = true;
    bool sunny = false;

    if(!sunny==true) //or-- we can right if(sunny) only, since in boolian variable sunny contain true or 1, since 1 means true and 0 means false
    {                 // ! will reverse the condition so it becomes sunny==false
        printf("its cloudy outside");
    }else{
        printf("Its sunny outside");
    }
    }