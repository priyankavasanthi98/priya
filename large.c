#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("a is large");
}
}
else if(b>c)
{
printf("b is large");
}
else
{
printf("c is large");
}
return 0;
}
