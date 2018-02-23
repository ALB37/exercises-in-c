/* sum.c: A simple calculator which sums odd and even inputs */

#include <stdio.h>

int main()
{
    int num;
    int sum1 = 0;
    int sum2 = 0;

    printf("Enter your first number: ");
    fflush(stdin);
    scanf("%d", &num);
    
    if (num % 2 == 0)
        sum1 += num;
    else
        sum2 += num;

    printf("Enter your second number: ");
    fflush(stdin);
    scanf("%d", &num);
    
    if (num % 2 == 0)
        sum1 += num;
    else
        sum2 += num;

    printf("Enter your third number: ");
    fflush(stdin);
    scanf("%d", &num);
    
    if (num % 2 == 0)
        sum1 += num;
    else
        sum2 += num;
    
    printf("\nThe sum of your even numbers is %d\n", sum1);
    printf("The sum of your odd numbers is %d\n", sum2);

    return 0;
}
