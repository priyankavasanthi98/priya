#include<stdio.h>
void main()
{
int n,i,flag=0;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
flag=1;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
}
