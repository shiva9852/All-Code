// WAP TO SWAP A NUMBER USING FUNCTION
#include <stdio.h>
void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
void main()
{
    int n1, n2;
    printf("ENTER TWO NUMBERS:");
    scanf("%d%d", &n1, &n2);
    printf("BEFORE SWAPPING n1=%d\n BEFORE SWAPPING n2=%d\n", n1, n2);
    swap(&n1, &n2);
    printf("AFTER SWAPPING n1=%d\n AFTER SWAPPING n2=%d\n", n1, n2);
}