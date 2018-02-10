#include<stdio.h>
void main()
{
int i,j,temp,median,n;
scanf("%d",&n);
int a[3]={3,2,1};
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
for(i=0;i<n;i++)
{
median=a[n/2];
printf("\n %d",median);
}
}
