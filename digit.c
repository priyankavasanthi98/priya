#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter the no");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("no.of digits in an integer is %d",count);
return 0;
}
