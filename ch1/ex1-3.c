#include <stdio.h>

// Exercise 1-3
int main() {
    //C = (5/9) (F - 32)
    //print a table of Celcius to F conversions
    //for F = 0,20,40,...,300
    int start = 0;
    int end = 300;
    int step = 20;
    float F, C;
    C = start;

    //printf("fahrenheit\tcelsius\n");
    printf("Celsius\tFahrenheit\n");
    while (C <= end)
    {
        //C = 5.0/9 * (F - 32); // doing 5/9 * ... will result in 0 due to flooring
        F = 9.0/5.0 * C + 32.0;
        printf("%3.0f\t\t\t%6.1f\n", C, F);
        C += step;
    }


    return 0;
}
