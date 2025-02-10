#include <stdio.h>
int main()
{
    int a;
    printf("Age of Ram = ");
    scanf("%d", &a);
    int b;
    printf("Age of Mohan = ");
    scanf("%d", &b);
    int c;
    printf("Age of Binod = ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("Ram is youngest", a);
    }
    if (b < a && b < c)
    {
        printf("Mohan is youngest", b);
    }
    if (c < b && c < a)
    {
        printf("Binod is youngest", c);
    }

    return 0;
}