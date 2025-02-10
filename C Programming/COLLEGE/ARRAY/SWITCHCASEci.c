// WAP TO PERFORM FIND THE C.I. FOR THE GIVEN P,R,T
#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    float P, R, T, CI, SI;
    printf("choose from the following ");
    printf("\n choose 1 for the simple interest ");
    printf("\n choose 2 for the compound interest ");
    printf("\nenter your choice= ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        // FOR FINDING THE SIMPLE INTEREST
        printf("\nPRINCIPLE AMOUNT = ");
        scanf("%f", &P);
        printf("\nRATE= ");
        scanf("%f", &R);
        printf("\nTIME = ");
        scanf("%f", &T);
        SI = (P * R * T) / 100;
        printf("\nSIMPLE INTEREST =%f", SI);
    case 2:
        //    FOR FINDING THE COMPOUND INTEREST
        printf("\nPRINCIPLE AMOUNT = ");
        scanf("%f", &P);
        printf("\nRATE= ");
        scanf("%f", &R);
        printf("\nTIME = ");
        scanf("%f", &T);
        CI = P*(pow(21+R/100,T));
        printf("\n COMPOUND INTEREST =%.2f",CI);

        break;
    }

    return 0;
}