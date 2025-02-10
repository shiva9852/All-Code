// WAP TO ENTER A NUMBER & PRINT UNIT ,TENS ,HUNDRED,THOUSAND PLACE DIGIT
#include <stdio.h>
int main()
{
    int number, unit, tens, hundreds, thousand;
    printf("ENTER A NUMBER = ");
    scanf("%d", &number);
    unit = number % 10;
    tens = (number / 10) % 10;
    hundreds = (number / 100) % 10;
    thousand = (number / 1000) % 10;
    // Print the results
    printf("Unit place digit: %d\n", unit);
    printf("Tens place digit: %d\n", tens);
    printf("Hundred place digit: %d\n", hundreds);
    printf("Thousand place digit: %d\n", thousand);

    return 0;
}