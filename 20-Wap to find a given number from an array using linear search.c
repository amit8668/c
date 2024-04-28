#include<stdio.h>
void main()
{
    int a[100],n,i,k;
    printf("\nEnter no. of elements of array:\n");
    scanf("%d",&n);
    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("\nEnter no to search:");
for(i=0;i<n;i++)
if(k==a[i])
{
    printf("\nNumbers %d found at location %d",k,i+1);
    break;
}
if(i>=n)
printf("\nNumbers does not exist:");
}