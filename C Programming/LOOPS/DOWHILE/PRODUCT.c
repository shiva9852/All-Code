// FIND PRODUCT OF NUMBERS FROM 1 TO 5
// #include <stdio.h>
// int main()
// {
//     int n = 1, s = 1;
//     do
//     {
//         s = s * n;
//         n++;
//     } while (n <= 5);
//     printf("PRODUCT = %d", s);
//     return 0;
// }

// FIND PRODUCT 1,3,5,7,9
#include<stdio.h>
int main(){
    int n =1,s=1;
    do{
        s=s*n;
        n=n+2;
    }while(n<=9);
    printf("PRODUCT OFF ODD NUMBERS = %d",s);
    return 0;
}