#include<stdio.h>
#include<math.h>
int main()
{
    double A;
    double B;
    double C;

    printf("Enter Side A:");
    scanf("%lf", &A);
    printf("Enter Side B:");
    scanf("%lf", &B);
    
    C=sqrt(A*A+B*B);

    printf("the hypotenuse of the triangle of Side A=%.0lf and Side B=%.0lf is:%lf", A,B,C);

}