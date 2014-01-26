/**************************************************
*
* strlen1.c
*
* David Scheller
*
* Prints a given string, one character per line.
*
* Demonstrates GetString() as user prompt, strlen and arrays.
***************************************************/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
	
	string s = GetString();

	// print out each character of a string
	
	for (int i = 0; i < strlen(s) ; i++)
	{
		printf("%c%s", s[i] ,(s[i] == ' ') ? "" : (s[i] >= 'A' && s[i] <= 'Z') ? "! " : ". ");
	}


	
	printf("\n");
	 
	return 0;
}