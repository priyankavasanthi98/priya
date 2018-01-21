#include<stdio.h>
void main()
{
int n,a=5;b=6,c=7;
printf("enter the numbers %d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d",&a);
}
else if(b>a&&b>c)
{
printf("%d",&b);
}
else
{
printf("%d",&c);
}
}

