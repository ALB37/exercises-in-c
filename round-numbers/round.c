// round.c: Rounds a floating point number to the nearest integer
#include <stdio.h>

int main()
{
    float decimal;
    int num;
    
    printf("Enter a decimal number: ");
    fflush(stdout);
    scanf("%f",&decimal);
    num = (int)(decimal + 0.5);
    printf("Your number rounded to the nearest integer is %d\n", num);
    return 0;
}
