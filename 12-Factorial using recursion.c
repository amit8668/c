#include<stdio.h>
#include<conio.h>
void main()
{
    
    int factorial(int);
    int n,f;
    printf("enter number:");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial of no is %d ",f);
    getch();
    
}
int factorial(int n)
{
    int f;
    if(n==1)
    return 1;
    else
    f= n*factorial(n-1);
    return f;
}
