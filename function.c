/*****************************************************
 * fuction.c
 *
 * David Scheller
 *
 * Pratice with functions
 *
 * Fuction decalrations
 *****************************************************/

#include <stdio.h>
#include <cs50.h>

// function decalration ends in semicolon
// must be above function main
// return value function_name(input arguement)
void HelloWorld(void);

int main(void)
{
    // call another fuctions
    HelloWorld();
}

void HelloWorld(void)
{
    // print out a greeting to the user
    printf("ohai, world!\n");
}




