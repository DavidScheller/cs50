/***********************************************************
 * beer1.c
 *
 * Scheller
 *
 * Sings "99 Bottles of Beer on the Wall."
 *
 * Demonstrates hierarchical decomposition and parameter passing.
 ***********************************************************/
 
#include <stdio.h>
#include <cs50.h>

// function prototype
void chorus(int b);


int main(void)
{
    // ask user for number
    printf("How many bottles will there be? ");
    int n = GetInt();
    
    // exit upon invalid input
    if (n < 1)
    {
        printf("Sorry, that makes no sense.\n");
        return 1;
    }
    
    // sing the annoying song   
   printf("\n");
   for (int i = n; i > 0; i--)
       chorus(i);
  
  
    // sing the annoying song
    //printf("\n");
    //while (n)
    //    chorus(n--);  
    
    
    // exit when song is over
    printf("Wow, that's annoying.\n");
    return 0;
}    
    
// sings about specified number of bottles
void chorus(int b)
{
    // use proper grammer    
    string s1 = (b == 1) ? "bottle" : "bottles";
    string s2 = (b == 2) ? "bottle" : "bottles";

    // sing verses
    printf("%d %s of beer on the wall,\n", b, s1);
    printf("%d %s of beer,\n", b, s1);
    printf("Take one down and pass it around,\n");
    printf("%d %s of beer on the wall.\n\n", b - 1, s2);
} 
