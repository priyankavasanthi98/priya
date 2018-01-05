#include<stdio.h>
#include<conio.h>
void main()
{
int n=131,rem,rev=0,t;
printf("%d",n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf("\n yes the number is palindrome",n);
}
else
{
printf("\n the number is not palindrome",n);
}
}
