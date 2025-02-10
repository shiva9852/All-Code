// WAP TO FIND ROOT OF A QUADRATIC EQUATION
#include <math.h>
int main()
{
    float a, b, c, d, x, r1, r2;
    printf("ENTER THE VALUE OF a,b,c respectively :\n");
    scanf("%f%f%f", &a, &b, &c);
    d = (pow(b, 2) - 4 * a * c);
    if (d == 0)
    {
        r1 = r2 = -(b) / 2 * a;
        printf("r1= %d", r1);
        printf("r2= %d", r2);
    }
    else if (d > 0)
    {
        r1 = -(b) + sqrt(d) / 2 * a;
        r2 = -(b)-sqrt(d) / 2 * a;
        printf("r1= %d", r1);
        printf("r2= %d", r2);
    }
    else if (d < 0)
        printf("IMAGINARY ROOTS");
    return 0;
}