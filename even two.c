#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=1,b=9;
printf("\n %d first interval",a);
printf("\n %d second interval",b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("%d the even number between two intervals are",i);
}
}
