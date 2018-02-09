#include<stdio.h>
void main()
{
int a[10],n,i;
printf("\n enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the elements");
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
printf("%d %d \n",a[i],i);
}
}
}
