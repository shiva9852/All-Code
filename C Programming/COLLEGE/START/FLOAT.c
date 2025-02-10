#include <stdio.h>
int main()
{
    float x, y;
    printf("ENTER THE VALUE OF X AND Y = ");
    scanf("%f%f", &x, &y);
    printf("ADD= %f\n", x + y);
    printf("SUBTRACT= %f\n", x - y);
    printf("MULTIPLY= %f\n", x * y);
    printf("DIVISION= %f\n", x / y);
    return 0;
}