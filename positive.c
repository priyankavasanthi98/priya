#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter any integer");
scanf("%d",&n);
if(n<=0)
{
if(n==0)
{
printf("given number is zero");
}
else
{
printf("given number is negative");
}
}
else
{
printf("given number is positive");
}
return 0;
}
}
