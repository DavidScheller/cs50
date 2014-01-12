/*****************************************************
 * string1.c
 *
 * David Scheller
 *
 * Prints a given string one character per line.
 *
 * Demonstrates strings as arrays of chars and use of strlen.
 ****************************************************/
 
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();
    
    // print string, one char per line
    if (s != NULL)
    {
// without optimization    
//        for (int i = 0; i < strlen(s); i++)
//        {
//            char c = s[i];
//            printf("%c\n", c);
//        }
//    } 
//    
// with optimization  
         for (int i = 0; n = strlen(s); i < n; i++)
         {
             printf("%c\n", s[i]);
         }
     } 
    return 0;
}    

