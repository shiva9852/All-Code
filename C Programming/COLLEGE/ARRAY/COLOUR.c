// WAP TO DISPLAY THE NAME OF COLOUR ACCORDING TO THEIR FIRST LETTER
#include<stdio.h>
int main(){
    
   char color;
    //   char R,r,B,b,G,g,Y,y;
    printf("ENTER FIRST CHARACTER = ");
    scanf("%c",&color);
    switch(color)
    {
        case 'R':
        case 'r':printf("RED");
        break;
        case 'B':
        case 'b':printf("BROWN,BLUE,BLACK");
        break;
        case 'G':
        case 'g':printf("GREEN,GREY");
        break;
        case 'Y':
        case 'y':printf("YELLOW");
        default:printf("I DON'T KNOW ANY COLOUR NAME FROM THE CHARACTER GIVEN");
        break;

    }

    return 0;
}