#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    int n,i,j,flag=0;
    printf("Enter the string:");
    scanf("%s",s1);
    n=strlen(s1);
    for(i=0;j=n-1;j<=n-1;i++;j--)
    s2[j]=s1[i];
flag = strcmp(s1,s2);
if(flag==0)
printf("String is palindrome");
else
printf("String is not palindrome");
}