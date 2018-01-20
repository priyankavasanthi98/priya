#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b=10,j,i,count=0;
printf("\n the first interval is %d",a);
printf("\n the second interval is %d",b);
for(i=a;1<b;i++)
{
  for(j=2;j<i;j++)
  {
if((i%j)==0)
count++;
}
if(count==0)
{
printf("\n the prime number between two intervals are");
}
}
