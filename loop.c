#include <stdio.h>
#include <cs50.h>

int main(void)
/*
// for loop
{
    for (int i = 0; i < 10; i++)
        printf("*");
    printf("\n");
    return 0;
}

{    
    for (int i = 10; i > 0; i--)
    {
        printf("Counting down ... %i\n, i);
    }
}

// do while loop

{
    int input;
    do
    {
        printf("Enter a positive number: ");
        input = GetInt();
    {
    while (input <= 0);
}

*/
{
    int i;
    do
    {
        printf("Give me an int: ");
        i = GetInt();
    }
    while (i < 0 || i > 10);
    printf("Thanks, i is %d\n", i);
    return 0;
}

/*
{
    int i = 10
    while (i > 0)
    {
        printf("Totally loopy!\n");
        i--:
    }
}
*/
