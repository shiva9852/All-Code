// INPUT THE DAY NUMBER AND DISPLAY THE NAME OF THE DAY
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE DAY NUMBER = ");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        printf("It is Monday");
        break;
        case 2:
        printf("It is Tuesday");
        break;
        case 3:
        printf("It is Wednesday");
        break;
        case 4:
        printf("It is thursday");
        break;
        case 5:
        printf("It is Friday");
        break;
        case 6:
        printf("It is saturday");
        break;
        case 7:
        printf("It is Sunday");
        break;
        default:
        printf("Invalid day number ");
    }
    return 0;
}