// /INPUT ELEMENTS OF ARRAY AND DISPLAY IT
#include <stdio.h>
int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("ENTER THE %d DATA :", i+1);
        scanf("%d", &a[i]);
    }
    printf("ELEMENTS OF ARRAY ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
