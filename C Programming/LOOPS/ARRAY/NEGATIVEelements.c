// COUNT THE TOTAL NUMBER OF NEGATIVE ELEMENTS OF ARRAY
#include <stdio.h>
int main()
{
    int a[8], n, x = 0;
    for (n = 0; n <= 7; n++)
    {
        printf("ENTER THE DATA = ");
        scanf("%d", &a[n]);
    }
    printf("\n NUMBER OF ELEMENTS = ");
    for (n = 0; n <= 7; n++)
    {
        printf("%d\t", a[n]);
    }
    for (n = 0; n <= 7; n++)
    {
        if (a[n] > 0)
            x++;
    }
    printf("TOTAL NUMBER OF NEGATIVE ELEMENTS = %d", x);
    return 0;
}