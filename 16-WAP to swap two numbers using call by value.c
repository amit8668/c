#include<stdio.h>
void swap(int,int);//prottype of the function
int main()
{
    int a,b;
    printf("\nEnter value of a and b:");
    scanf("%d",&a,&b);
    printf("\nBefore swapping the values in main a=%d,b=%d\n,a,b");
}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping values in function a=%d,b=%d\n,a,b");
}