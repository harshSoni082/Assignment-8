// program which finds the sum of second last digits
#include <stdio.h>

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
    sum += (number%100 / 10);
  }
  printf("Sum of second last digits of all numbers is: %d\n", sum);

  return 0;
}
