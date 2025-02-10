// WAP TO FIND SUM OF ALL EVEN AND ODD SEPRATELY BETWEEN 1 TO 20
#include <stdio.h>
int main()
{
    int i, sume = 0, sumo= 0;
    for (int i = 1; i <= 20;i++)
    {
        if (i % 2 == 0)
        {
            sume=sume+i;
        }
        else{
            sumo=sumo+i;
        }
    }
    printf("Sum of even numbers between 1 to 20: %d\n", sume);
    printf("Sum of odd numbers between 1 to 20: %d\n", sumo);

    return 0;
}