#include <stdio.h>
//takes temperature in fahrenheit and converts to celsius 

int main(){

    double fahrenheit;
    scanf("%lf", &fahrenheit);
    double celsius = (fahrenheit - 32) * 5 / 9;
    printf("%lf", celsius);
    return 0;
}