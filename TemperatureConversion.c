#include <stdio.h>
#include <ctype.h>
int main()
{
    char unit;
    float temperature;

    printf("Is your temperature is in C or F:");
    scanf("%c", &unit);

    unit = toupper(unit);
    
    if(unit=='C'){
        printf("\nEnter your temperature in C:");
        scanf("%f", &temperature);  

        temperature=(temperature * 9 / 5)+32;

        printf("\nThe temperature in Farenheit is: %.1f", temperature);
    }else if(unit == 'F'){
        printf("\nEnter your temperature in F:");
        scanf("%f", &temperature);

        temperature=(temperature-32)/1.8;

        printf("\nThe temperature in Calcius is: %.1f", temperature);
    }else{
        printf("\nEnter a Valid Unit Stupid!!");
    } 
    return 0;
}