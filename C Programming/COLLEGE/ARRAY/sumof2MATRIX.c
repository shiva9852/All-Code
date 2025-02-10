// WAP TO ADD ELEMENTS OF TWO MATRIX
#include <stdio.h>
int main()
{
    int i, j, m[3][3], n[3][3], s[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Matrix m:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    printf("Matrix n:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s[i][j] = m[i][j] + n[i][j];
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
