#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    printf("How many apples do you have?");
    int i = GetInt();
    printf("HaHa. I am going to eat one of them!\n");
    i = i - 1;
    printf("You now have %d apples left!\n", i);
}
