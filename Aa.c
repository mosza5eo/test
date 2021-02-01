#include<stdio.h>
int main(){
    char t;
    int num,n;
    printf("Enter a 12-hour time [eg. 12:34 am]:");
    scanf("%d : %d %c", &num, &n, &t);
    switch (t)
    {
    case 'PM': 
    num+=12;
        break;
    
    default:
        break;
    }
}