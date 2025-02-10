// COUNT ALL THE EVEN NUMBERS FROM 1 TO 30
#include <stdio.h> 
int main()
{
    int n = 1, z = 0;
    while (n <= 30)
    {
        if (n % 2 == 0)
        {
            z++;
        }
        n++;
    }
    printf("Total even numbers = %d ", z);

    return 0;
}