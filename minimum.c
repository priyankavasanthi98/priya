#include<stdio.h>
void main()
{
int n,a,b,c;
scanf("%d",&n);
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
if(a<c)
{
printf("%d",a);
}
}
else if(b<c)
{
printf("%d",b);
}
else
{
printf("%d",c);
}
}
