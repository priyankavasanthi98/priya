#include<stdio.h>
void main()
{
int i,j,temp,median,sum=0;
int a[3]={3,2,1};
for(i=0;i<5;i++)
{
for(j=i+1;j<3;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<3;i++)
{
printf("%d \n",a[i]);
}
for(i=0;i<3;i++)
{
sum=sum+i;
median=sum/2;
printf("\n d",median);
}
}
