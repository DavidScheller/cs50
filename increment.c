/*****************************************************
 * increment.c
 *
 * David Scheller
 *
 * Increments a variable
 *
 * Demonstrates use of parameter and return value.
 ****************************************************/
 
#include <stdio.h>

// declare function prototype.
// Return Type Function Name(Parameter List).

int increment(int number);

int main(void)
{
    int x = 1;
    printf("x is now %d\n", x);
    printf("Incrementing...\n");
    x = increment(x);
    printf("Incremented!\n");
    printf("x is now %d\n", x);
    return 0;
}    

/**
 * Tries to increment x.
 */
 
int increment(int number)     
{
    return number + 1;
}
