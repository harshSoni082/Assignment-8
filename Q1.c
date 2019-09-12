// program which finds the sum of last digits
#include <stdio.h>

int main()
{
  int i, n, number, sum = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    sum += number%10;
  }
  printf("Sum of last digits of all numbers is: %d\n", sum);

  return 0;
}
