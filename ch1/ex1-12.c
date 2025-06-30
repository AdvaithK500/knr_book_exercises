#include <stdio.h>

#define IN 1
#define OUT 0

// Exercise 1-12
int main() {
    int c, state; // parser of characters
    // set initial state as OUT
    state = OUT;
    // invariant: check c, if its a goal character, state resets to OUT and we putchar
    while ( (c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            // what if the first character is one if these? do nothing
            // what if we are in a word and then we encounter these chars? do below
            if (state == IN) {
                //reset the state to maintain invariant
                state = OUT;
                //print a new line
                putchar('\n');
            }
        } else
        {
            //we have a valid character being parsed,
            // now we could have just entered a valid character, so state must be turned toIN
            if (state == OUT)
            {
                state = IN;
            }
            putchar(c);
        }
    }
    return 0;
}
