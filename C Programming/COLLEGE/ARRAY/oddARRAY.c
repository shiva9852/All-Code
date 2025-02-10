// DISPLAY ALL THE ODD ELEMENTS OF THE ARRAY
#include <stdio.h>
int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("ENTER THE %d DATA:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("ODD ELEMENTS OF ARRAY:  ");
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 != 0)
            printf("%d   ", a[i]);
    }
    return 0;
}