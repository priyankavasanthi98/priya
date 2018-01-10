#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=120,b=130,result=0;
printf("the first interval %d",a);
printf("the second interval %d",b);
t=n;
while(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
if(t==result)
{
printf("armstrong number is %d",n);
}
}
}
