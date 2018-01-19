#include<stdio.h>

void main()
{int n,i,t,a=150,b=160,rem,result=0;
printf("the first interval %d",a);
printf("the second interval %d",b);
{
for(i=150;i<=160;i++)
{
t=n;
while(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
}
if(t==result)
{
printf("armstrong number between two intervals are %d ",n);
}
}
}

}
