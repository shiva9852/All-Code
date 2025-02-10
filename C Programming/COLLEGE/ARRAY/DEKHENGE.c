// WAP TO DISPLAY A CHARACTER AND ITS VISE VERSA
#include <stdio.h>
int main()
{
    int a;
    char b;
    printf("Enter a character= ");
    scanf("%c", &b);
    a = b;
    if (a < 97)
    {
        a = a + 32;
        printf("%c", a);
    }
    else
    {
        a = a - 32;
        printf("%c", a);
    }

    return 0;
}