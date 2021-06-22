#include<stdio.h>

//int addTen(int x)
//{
 //   x+=10;
 //   printf("in addTen x = %d\n",x);
 //   return x;
//}
//void addTenPassByReference(int *x)
//{
 //   *x += 10;
  //  printf("in addTenPassByReference x = %p, *x =%d\m", x, *x);
//}

//void printArray(int *printArr, int size)
//{
   // for (int *p = printArr; p< (printArr + size); p++)
   // {
   //     printf("printArr [%p] = %d\n", p, *p);
  //  }
//}
//{
 //   for ( int i = 0; i<size; i++)
  //  {
 //       printf("printArr [%d] [%p] = %d\n", i, printArr+i, *(printArr+i));
 //   }
//}
void printSTR(char *str)
{
    for (int a = 0; *(str + a)!='\0'; a++)
    {
        printf("String = %c address = [%p]\n", *(str + a), (str + a));
    }
}
int main()
{
    //int x =201;
    //int y = addTen(x);
    //printf("in main x = %d, y = %d\n, x, y");
    //addTenPassByReference(&x);
   // printf("in main [%p] x = %d\n", &x, x);

   // int arr[5] ={11, 22, 33, 44, 55};
   // printArray(arr, 5);
    char str[100];
    scanf("%s", str);
    printSTR(str);
    printf("mamo");

}
