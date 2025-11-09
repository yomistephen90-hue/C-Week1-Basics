#include <stdio.h>
// This program converts Fahrenheit to Celsius
int main(){
    int celsius, fahr, upper, lower, step;
// Initialize variables
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
// Print header
    printf("Celsius\tFahrenheit\n");
    while(fahr<=upper){
            celsius =  5 * (fahr - 32) / 9;
            printf("%d\t%d\n", celsius, fahr);
            fahr = fahr + step;
    }
    return 0; // This is a comment
};

