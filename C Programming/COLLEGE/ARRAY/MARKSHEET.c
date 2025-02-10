#include <stdio.h>
int main()
{
    float roll, physics, chemistry, maths, t, p;
    printf("ENTER ROLL NO.= ");
    scanf("%f", &roll);
    printf("MARKS OF PHYSICS= ");
    scanf("%f", &physics);
    printf("MARKS OF CHEMISTRY= ");
    scanf("%f", &chemistry);
    printf("MARKS OF MATHS= ");
    scanf("%f", &maths);
    t = physics + chemistry + maths;
    p = t / 3;
    if (p >= 60)
    {
        printf("FIRST DIVISION");
    }
    else if (p >= 45 && p < 60)
    {
        printf("SECOND DIVISION");
    }
    else if (p < 45 && p >= 33)
    {
        printf("THIRD DIVISION");
    }
    else if (p < 33)
    {
        printf("FAIL");
    }
    return 0;
}