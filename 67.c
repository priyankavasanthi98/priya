#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
while(n%10!=0)
{
n++;
}
printf("%d",n);
}
