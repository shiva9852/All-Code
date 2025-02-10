// COUNT THE TOTAL NUMBER OF ZERO ELEMENTS IN THE ARRAY
#include <stdio.h>
int main()
{
    int a[10], n, x = 0;
    for (n = 0; n <= 9; n++)
    {
        printf("ENTER THE DATA = ");
        scanf("%d", &a[n]);
    }
    printf("\n NUMBER OF ELEMENTS = ");
    for (n = 0; n <= 9; n++)
    {
        printf("%d\t", a[n]);
    }
    for (n = 0; n <= 9; n++)
    {
        if (a[n] % 10 == 0)
            x++;
    }
    printf("\n TOTAL NUMBER OF ZERO ELEMENT = %d",x);
    return 0;
}
