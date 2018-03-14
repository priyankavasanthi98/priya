#include<stdio.h>
void main()
{
int a,b,c,i,f=0;
scanf("%d %d",&a,&b);
c=a*b;
for(i=0;i<=c;i++)
{
if(c==i*i)
{
f=1;
}
}
if(f==1)
{
printf("yes");
}
else
{
printf("no");
}
}

