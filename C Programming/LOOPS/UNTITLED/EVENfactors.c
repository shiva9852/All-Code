// DISPLAY ALL THE EVEN FACTORS OF A NUMBER
#include <stdio.h>
int main()
{
    int n, x = 1;
    printf("Enter a number = ");
    scanf("%d", &n);
    while (x <= n)
    {
        if (n % x == 0 && x % 2 == 0)
        {
            printf("%d ", x);
        }
        x++;
    }
    return 0;
}