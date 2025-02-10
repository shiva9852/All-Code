#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Ram age = ");
    scanf("%d", &a);
    printf("Enter Shyam age = ");
    scanf("%d", &b);
    printf("Enter Ajay age = ");
    scanf("%d", &c);
    if (a < b)
    {
        if (a < c)
            printf("%d is Youngest", a);
        else // a<c             b<a<c
            printf("%d is Youngest", c);
    }
    else
    { // b>a  a abb sabse bara to nhi hai
        if (b < c)
            printf("%d is Youngest", b);
        else // c>b          a<b<c
            printf("%d is Youngest", c);
    }
    return 0;
}