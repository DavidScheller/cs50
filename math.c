#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Give me an integer: ");
    int n = GetInt();
    printf("Thanks for the %d!\n", n);
    return 0;
}
