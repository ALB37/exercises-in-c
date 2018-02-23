/* sum.c: A simple calculator which sums odd and even inputs */

#include <stdio.h>

int main()
{
  int num1, num2, num3, sum1, sum2;

  printf("Enter your first number: ");
  fflush(stdin);
  scanf("%d", &num1);

  printf("Enter your second number: ");
  fflush(stdin);
  scanf("%d", &num2);

  printf("Enter your third number: ");
  fflush(stdin);
  scanf("%d", &num3);

  sum1 += (num1 % 2 == 0) ? num1 : 0;
  sum1 += (num2 % 2 == 0) ? num2 : 0;
  sum1 += (num3 % 2 == 0) ? num3 : 0;
  sum2 += (num1 % 2 == 1) ? num1 : 0;
  sum2 += (num2 % 2 == 1) ? num2 : 0;
  sum2 += (num3 % 2 == 1) ? num3 : 0;

  printf("The sum of your even numbers is %d\n", sum1);
  printf("The sum of your odd numbers is %d\n", sum2);

  return 0;
}