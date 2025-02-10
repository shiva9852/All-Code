// // CHECK IS THE NUMBER PALINDROME
// #include <stdio.h>
// int main()
// {
//     int n, x = 0, y;
//     printf("ENTER A NUMBER =");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         y = n % 10;
//         x = 10 * x + y;
//         n = n / 10;
//     }
//     printf("REVERSE OF NUMBER =%d/n", x);
//     if (n == x)
//     {
//         printf("THE NUMBER IS A PALINDROME\n");
//     }
//     else
//         printf("THE NUMBER IS NOT A PALINDROME\n");
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n, x = 0, y, original;
    printf("ENTER A NUMBER = ");
    scanf("%d", &n);
    original = n; // Store the original value of n

    while (n != 0)
    {
        y = n % 10;
        x = 10 * x + y;
        n = n / 10;
    }

    printf("REVERSE OF NUMBER = %d\n", x);

    if (original == x) // Compare the original value of n with the reversed number
    {
        printf("THE NUMBER IS A PALINDROME\n");
    }
    else
    {
        printf("THE NUMBER IS NOT A PALINDROME\n");
    }

    return 0;
}