#include<stdio.h>
#include<conio.h>
int main()
{
int n=5,fact=1,i;
printf("the integer is %d",n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial of the number is %d",fact);
}
