#include<stdio.h>
void main()
{
int n,a,b,sum=0;
scanf("%d",&n);
while(n!=0)
{
a=n%10;
sum=sum*10+a;
n=n/10;
}
while(sum!=0)
{
b=sum%10;
printf("%d\t",s);
sum=sum/10;
}
}
