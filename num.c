#include<stdio.h>
void main()
{
int n;
char ch;
scanf("%d",&n);
if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
{
printf("%d not a number",&n);
}
else
{
printf("%d number",&n);
}
}
