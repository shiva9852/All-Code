// COUNT TOTAL NUMBER OF EVEN ELEMENTS IN THE ARRAY
#include <stdio.h>
int main()
{
    int a[10], n, x = 0;
    for (n = 0; n <= 9; n++)
    {
        printf("ENTER THE DATA = ");
        scanf("%d", &a[n]);
    }
    printf("\n ELEMENTS OF ARRAY = ");
    for (n = 0; n <= 9; n++)
    {
        printf("%d\t", a[n]);
    }
    for (n = 0; n <= 9; n++)
    {
        if (a[n] % 2 == 0)
            x++;
        
    }
    printf("TOTAL NUMBER OF EVEN ELEMENTS = %d", x);
    return 0;
}