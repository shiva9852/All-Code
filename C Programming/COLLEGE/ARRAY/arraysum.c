// WRITE A PROGRAM TO ADD 5 NUMBERS
#include <stdio.h>
int main()
{
    int a[5], sum = 0;
    printf("ENTER THE DATA \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1); 
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("SUM =%d", sum);
    return 0;
}