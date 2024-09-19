//The ternary operator in C is a shorcut of writing simple if-else statements when assigning/returning a value. It is also known as the conditional operator.It has the following syntax:
//(condition) ? value if true : value if false;

#include <stdio.h>

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}
int main(){

    int max=findMax(6,5);

    printf("%d", max);

    return 0;
}

    