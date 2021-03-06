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
    bool thankful = false;
    do
    {
    	printf("I demand that you give me a positive integer: ");
    	if (GetInt() >0)
    		thankful = true;
    }	
    while (!thankful);
    printf("Thanks for the positive integer!\n");
    return 0;
}    