// Input five numbers and add it such that if negative number is inputted
//  then inputting is terminated
#include <stdio.h>
int main()
{
    int n, x, s = 0;
    for (x = 1; x <= 5; x++)
    {
        printf("ENTER A NUMBER = ");
        scanf("%d", &n);
        if (n < 0)
            break;
        s = s + n;
    }
    printf("SUM = %d", s);
    return 0;
}