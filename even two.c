#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=1,b=9;
printf("\n first interval %d",a);
printf("\n  second interval %d",b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("%d the even number between two intervals are",i);
}
}
}
