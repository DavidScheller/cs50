#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for temperature
    printf("Temperature in F: ");
    float f = GetFloat();
    
    // convert F to C
    float c = (5.0 / 9.0) * (f - 32);
    
    // display result
    printf("that number in C is %.1f\n", c);
    
    return 0;
}
