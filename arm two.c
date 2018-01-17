#include<stdio.h>

void main()
{int n,i,t,a=120,b=130,rem,result=0;
printf("the first interval %d",a);
printf("the second interval %d",b);
{
for(i=a;i<=b;i++)
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
printf("armstrong number between two intervals are %d ",a,b);
}
}
}

}
