// ADD ALL THE even FACTORS OF A NUMBER
#include <stdio.h>
int main()
{
  int n, x = 1, s = 0;
  printf("Enter a number = ");
  scanf("%d", &n);
  while (x <= n)
  {
    if (n % x == 0 && x%2==0)
    {
      s = s + x;
    }
    x++;
  }
  printf("SUM OF EVEN FACTORS = %d ", s);
  return 0;
}