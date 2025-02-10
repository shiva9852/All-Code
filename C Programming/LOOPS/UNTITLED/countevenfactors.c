// COUNT THE TOTAL EVEN FACTORS OF A NUMBER
#include <stdio.h>
int main()
{
    int n, x = 1,c = 0;
    printf("Enter a number = ");
    scanf("%d", &n);
    while (x <= n)
    {
        if (n % x == 0 && x%2==0)
        {
            c++;
        }
        x++;
    }
    printf("TOTAL NUMBER OF EVEN FACRORS = %d", c);
    return 0;
}