// ADD ALL THE FACTORS OF A NUMBER
#include <stdio.h>
int main()
{
  int n, x = 1, s = 0;
  printf("Enter a number = ");
  scanf("%d", &n);
  while (x <= n)
  {
    if (n % x == 0 )
    {
      s = s + x;
    }
    x++;
  }
  printf("%d ", s);
  return 0;
}