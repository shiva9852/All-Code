// WRITE A PROGRAM TO CHECK THE GIVEN NUMBER IS PRIME OR NOT
#include <stdio.h>
int main()
{
    int n, c = 0;
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c = c + 1;
        }
    }
    if (c == 2)
    {
        printf("%d IS A PRIME NUMBER",n);
    }
    else
    {
        printf("%d IS NOT A PRIME NUMBER",n);
    }
    return 0;
}