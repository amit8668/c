// Do not copy this commment //
// Question : following patter we to printf
//     1
//    121
//   12321
//  1234321
// 123454321

// Code starts from here :
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    clrscr();
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}


// Another patter:
// ABCDE
// ABCD
// ABC
// AB
// a

// code:
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    clrscr();
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf("%C",64+j);
        }
       printf("\n");
    }
    getch();
}
