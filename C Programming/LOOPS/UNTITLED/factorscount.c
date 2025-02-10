// COUNT THE TOTAL FACTORS OF A NUMBER
#include <stdio.h>
int main()
{
    int n, x = 1,c = 0;
    printf("Enter a number = ");
    scanf("%d", &n);
    while (x <= n)
    {
        if (n % x == 0)
        {
            c++;
        }
        x++;
    }
    printf("TOTAL NUMBER OF FACRORS = %d", c);
    return 0;
}