#include<stdio.h>
void swap(int*x,int*y);//prototype of function
int main()
{
    int a,b;
    printf("\nEnter value of a and b");
    scanf("%d %d",&a,&b);
    printf("Before swapping the values in  main a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping values in main a=%d,b=%d\n"a,b);
}
void swap(int*x,int*y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("After swapping values in function a=%d,b=%d\n",x*,*y);
}