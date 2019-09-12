// program to find the sum of numbers after deleting last digit
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
    sum += number / 10;
  }
  printf("Sum till second last digits of all numbers is: %d\n", sum);

  return 0;
}
