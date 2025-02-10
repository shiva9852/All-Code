#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter first number = "),
        scanf("%d", &a);
    printf("Enter second number ="),
        scanf("%d", &b);
    printf("Enter third number ="),
        scanf("%d", &c);
    printf("Enter fourth number ="),
        scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest number", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is the greatest number", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("%d is the greatest number", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("%d is the greatest number", d);
    }
    return 0;
}
