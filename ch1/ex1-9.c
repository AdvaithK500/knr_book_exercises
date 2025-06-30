#include <stdio.h>

// Exercise 1-9
int main() {
    // we will just toggle the boolean flag prevWasBlank
    // if we are currently processing a non space char, then set it to 0
    // else if it is a space char set it to 1
    int c;
    int prevWasBlank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!prevWasBlank)
            {
                putchar(c); // put the single space once
                prevWasBlank = 1; // ensures we dont re enter if the next is also a space
            }
        } else
        {
            putchar(c);
            prevWasBlank = 0;
        }
    }
    return 0;
}
