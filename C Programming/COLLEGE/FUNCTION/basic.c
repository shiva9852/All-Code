// WRITE A PROGRAM TO ADD TWO NUMBERS USING FUNCTION
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int no1, no2, total = 0;
    printf("\n ENTER THE FIRST NUMBER =");
    scanf("%d", &no1);
    printf("\n ENTER THE SECOND NUMBER = ");
    scanf("%d", &no2);
    total = sum(no1, no2);
    //  FUNCTION CALL
    printf("\n SUM = %d", total);
    return 0;
}
// FUNCTION DEFINITION
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}