#include <stdio.h>

// Exercise 1-6
int main() {

    // int c;
    // cant use char c because char is not big enough to hold the EOF value
    // EOF is a value that is not the same as any char value, its usually negative, exact value doesnt matter

    // while ((c = getchar()) != EOF)
    // {
    //     putchar(c);
    // }

    printf("%d", getchar() != EOF);
   //return 0;
}
