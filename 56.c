#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,n=0,a=0;
printf("enter the string:");
scanf("%s",&str);
if(str[i]>=0||str[i]<=9)
n++;
if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
a++;
if(n!=0&&a!=0)
{
printf("yes");
}
else
{
printf("no");
}
}
