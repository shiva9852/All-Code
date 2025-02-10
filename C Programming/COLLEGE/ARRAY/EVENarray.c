// DISPLAY ALL EVEN ELEMENTS OF ARRAY
#include <stdio.h>
int main()
{
    int a[6], i;
    for (i = 0; i < 6; i++)
    {
        printf("ENTER THE %d DATA: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("EVEN ELEMENTS OF ARRAY :");
    for (i = 0; i < 6; i++)
    {
        if (a[i] % 2 == 0)
        
            printf("%d \n", a[i]);
    }
    return 0;
}