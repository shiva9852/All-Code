// WAP TO DISPLAY 3*4 MATRIX
#include <stdio.h>
int main()
{
    int i, j, m[3][4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}