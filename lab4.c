#include<stdio.h>
 //declearation
int x = 10;
int addTen(int x)
{
    x+=10;
    return x;
}

 int main()
 {
     //fucntion call
    int y=addTen(x);
    printf("x=%d,y=%d/n",x,y);
    printf("sothi");
 }