#include<stdio.h>
#include<conio.h>
void main()
{
int n=153,rem,result=0,t;
printf("the number is %d",n);
t=n;
while(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
}
if(t==result)
{
printf("%d is an armstrong number",n);
}
else
{
printf("%d is not an armstrong number",n);
}
}
