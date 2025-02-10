// SUM OF DIGITS
// #include <stdio.h>
// int main()
// {
//     int n, s = 0, y;
//     printf("ENTER A NUMBER = ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         y = n % 10;
//         s = s + y;
//         n = n / 10;
//     }
//     printf("SUM OF DIGITS = %d", s);
//     return 0;
// }






// SUM OF EVEN DIGITS
#include <stdio.h>
int main()
{
    unsigned long int n, s = 0, y;
    printf("ENTER A NUMBER = ");
    scanf("%lu", &n);
    while (n != 0)
    {
        y = n % 10;
        if(y%2==0)
        s = s + y;
        n = n / 10;
    }
    printf("SUM OF DIGITS = %d", s);
    return 0;
}
