// WAP TO PERFORM STAR PATTERN
#include <stdio.h>
int main()
{
    int i, j, number;
    printf("ENTER NUMBER OF LINES = ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}