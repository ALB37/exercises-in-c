/* sum.c: A simple calculator which sums odd and even inputs */

#include <stdio.h>

int main()
{
    int num;
    int sum1 = 0;
    int sum2 = 0;
    
    printf("This program will return a sum of the even and odd numbers you enter.\n");
    printf("Enter 0 to exit this sequence.\n");
    
    do
    {
        printf("\nEnter a number: ");
        fflush(stdin);
        scanf("%d", &num);
        
        if (num == 0) break;
        
        switch (num % 2)
        {
            case 0:
                sum1 += num;
                break;
            case 1:
                sum2 += num;
                break;
        }
        
        printf("\nThe running total of your even numbers is %d\n", sum1);
        printf("The running total of your odd numbers is %d\n", sum2);
    } while (num);
    
    printf("\nThe sum of your even numbers comes to %d\n", sum1);
    printf("The sum of your odd numbers comes to %d\n", sum2);

    return 0;
}
