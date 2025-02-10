// WAP TO DISPLAY N NUMBERS
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("ENTER VALUE OF n = ");
    scanf("%d", &n);
    while (i <=n)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}