#include<stdio.h>
#include<conio.h>
int gcd(int,int);
int lcm(int,int);
void main()
{
    int a,b,g,l,ll;
    clrscr();
    printf("\nEnter two numbers");
    scanf("%d %d",&a,&b);
    g=gcd(a,b);
    l=lcm(a,b);
    printf("\n GCD=%d and LCM=%d\n",g,l);
    getch();
}
int gcd(int n1,int n2);
{
    int x;
    if(n1<n2){
        x=n1;
    }
    else{
        x=n2;
    }
    while(n1%x!= || n2%x!=0)
    {
        x--;
    }
    return x;
}
int lcm(int m1,int m2)
{
    int y;
    if(m1>m2)
    {
        y=m1;
    }
    else{
       y=m2; 
    }
    while(y%m1!=0 || y%m2!=0)
    {
        y++;
    }
    return y;
}
