// WAP TO FIND TABLE OF A NUMBER USING FUNCTION
#include <stdio.h>
void table(int n, int i)
{
    if (i < 11)
    {
        printf("%d\n", n * i);
        table(n, i + 1);
    }
}
void main()
{
    in