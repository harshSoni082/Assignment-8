// program which finds the sum of all those numbers, whose last digit is multiple of three
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
    if ((number % 10) % 3 == 0)
    {
      sum += number;
    }
  }
  printf("Sum of numbers whose last digit is multiple of 3: %d\n", sum);
}
