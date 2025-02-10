// WAP TO DISPLAY TABLE OF A NUMBER
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    for (int i = n; i <= 10*n; i = i + n)
    {
        printf("%d\n", i);
    }
    // int n;
    // printf("ENTER A NUMBER = ");
    // scanf("%d", &n);
    // for (int i = 1; i <= 10; i=i++)
    // {
    //     printf("%d\n", i);
    // }
    return 0;
}