#include<stdio.h>
void main()
{
int n=10,i,j,t;
scanf("%d",&n);
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=a[i];
}
}
}
printf("%d",a[0]);
}

