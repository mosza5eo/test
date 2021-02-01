#include<stdio.h>
 //declearation
int x = 1088;
int addTen(int x)
{
    x+=1000000;
    return x;
}

 int main()
 {
     //fucntion call
    int y=addTen(x);
    printf("x=%d,y=%d/n",x,y);
 }