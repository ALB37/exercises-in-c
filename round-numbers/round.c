// round.c: Rounds a floating point number to the nearest integer
#include <stdio.h>

int main()
{
    float num;
    
    puts("Enter a decimal number:");
    scanf("%f",&num);
    
    printf("That number rounded is %.0f\n", num);
    return 0;
}
