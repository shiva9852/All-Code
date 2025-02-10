#include <stdio.h>
int main()
{
    // int x = 5, y = 3,z;
    // z = x-- - y;
    // printf("\n%d%d%d",x,y,z);
    // int i;
    // while (i = 10)
    // {
    //     printf("\n%d", i);
    //     i = i + 1;
    // }
    int x=4,y=0,z;
    while(x>=0){
        x--;
        y++;
        if(x==y)
        continue;
        else
        printf("\n%d%d",x,y);

    }
    return 0;
}