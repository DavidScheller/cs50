#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Original program
    //  printf("Enter a string: ");
    //  string s = GetString();
    //  printf ("hello, %s!\n", s);
    //  return 0;
    
    //Print 'hello' 5 times using a for loop
    
    for(int i = 0; i < 5; i++) 
    {
        printf("hello\n");
    }
    
    //Print 'goodbye' 5 times using a while loop
    
    int i = 0;
    while (i < 5)
    {
        printf("goodbye\n");
        i++;
    }
    
    return 0;
    
}
