/***********************************************************
 * increment2.c
 *
 * Scheller
 *
 * Increments Loop until user provides positive integer.
 *
 * Demonstrates use of bool and the "!" (NOT) parameterter.
 ***********************************************************/
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // loop until user provides positive number
    bool thankful = false;
    do
    {
        printf("I demand that you give me a positive integer.\n");
        if (GetInt() > 0)
            thankful = true;
    }
     while (!thankful);
     printf("Thanks for the positive integer.\n");
     return 0;
}
