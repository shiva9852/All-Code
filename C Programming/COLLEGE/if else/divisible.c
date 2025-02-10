// WAP TO DISPLAY ALL THE NUMBERS WHICH ARE DIVISIBLE BY 5 FROM 1 TO 40
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 40; i++)
    {
        if (i % 5 == 0)
        {
            printf("\n%d", i);
        }
    
    }
    return 0;
}