#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=2,b=9;
printf("enter the first interval %d",a);
printf("enter the second interval %d",b);
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("%d is an odd number",i);
}
}
}
