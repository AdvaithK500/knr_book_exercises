#include <stdio.h>

// Exercise 1-5
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
        //C = 5.0/9 * (F - 32);
        // F = (9.0/5) * C + 32
        for (C = 300; C >= 0; C -= step)
        {
            printf("%3.0f\t%6.1f\n", C, (9.0/5) * C + 32.0);
        }

        return 0;
    }

/*
*#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

    int main() {
        //print a table of Celcius to F conversions
        //for F = 0,20,40,...,300
        printf("Celsius\tFahrenheit\n");
        //C = 5.0/9 * (F - 32);
        // F = (9.0/5) * C + 32
        float F, C;
        for (C = UPPER; C >= 0; C -= STEP)
        {
            printf("%3.0f\t%6.1f\n", C, (9.0/5) * C + 32.0);
        }

        return 0;
    }
 *
 */