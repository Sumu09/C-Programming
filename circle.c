#include<stdio.h>
#include<math.h>
int main()
{
    const double PI=3.14;
    double circumference;
    double area;
    double radius;
    printf("Enter the radius of the circle:");
    scanf("%lf", &radius);
    circumference=2*PI*radius;
    area = PI * radius * radius;
    printf("the circumference of the circle is:%.2lf\n", circumference);
    printf("The area of the circle is : %.2lf", area);

}