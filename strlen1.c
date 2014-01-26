/**************************************************
*
* strlen1.c
*
* David Scheller
*
* Prints a given string, one character per line.
*
* Demonstrates use of strlen and arrays.
***************************************************/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
	
	string s = "THIS IS VERY COOL";

	// print out each character of a string
	
	for (int i = 0; i < strlen(s) ; i++)
	{
		printf("%c. ", s[i]);
	}
	
	printf("\n");
	 
	return 0;
}