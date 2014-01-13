/*****************************************************
 * positive.c
 *
 * David Scheller
 *
 * Demands user enter a posite number
 *
 * Demonstrates use of do-while.
 ****************************************************/
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // loop until user provides positive number integer
    int n;
    do
    {
    	printf("I demand that you give me a positive integer: ");
    	n = GetInt();
    }	
    while (n < 1);
    printf("Thanks for the %d\n", n);
    return 0;
}    