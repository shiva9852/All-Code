// INPUT THE ELEMENTS OF ARRAY AND DISPLAY IT
#include <stdio.h>
int main()
{
    int a[5], i;
    for (i = 0; i <= 4; i++)
    {
        printf("ENTER THE DATA = ");
        scanf("%d", &a[i]);
    }
    printf("\n ELEMENTS OF ARRAY =  ");
    for (i = 0; i <= 4; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
