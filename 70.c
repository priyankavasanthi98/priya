#include<stdio.h>
void main()
{
int n,i,c=0,x=1;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
c++;
}
for(i=0;i<c+1;i++)
{
x=x*2;
}
printf("%d",x);
}
