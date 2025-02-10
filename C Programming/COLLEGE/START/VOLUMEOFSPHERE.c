// WAP TO DISPLAY VOLUME OF SPHERE
// #include <stdio.h>
// int main()
// {
//     float pi = 3.14, r, VOS;
//     printf("RADIUS = ");
//     scanf("%f", &r);
//     VOS = (4.0 / 3.0) * pi * r * r * r;
//     printf("VOLUME OF SPHERE =%f ", VOS);
//     return 0;
// }


// WAP TO PERFORM MEAN/PERCENTAGE OF A STUDENT MARKS THAT HE OBTAINED IN 6 SUBJECTS
#include<stdio.h>
int main()
{
    float S1,S2,S3,S4,S5,S6,M;
    printf("MARKS OBTAINED\n");
    scanf("%f%f%f%f%f%f",&S1,&S2,&S3,&S4,&S5,&S6);
    M=(S1+S2+S3+S4+S5+S6)/6;
    printf("MEAN/PERCENTAGE=%.2f",M);
    return 0;
}