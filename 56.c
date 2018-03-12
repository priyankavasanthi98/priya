#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,n=0,a=0,k,x=0;
printf("enter the string:");
scanf("%s",&str);
k=strlen(str);
for(i=0;i<k;i++)
{
if(str[i]>='a'&&str[i]<'z')
n++;
else if(str[i]>='A'&&str[i]<='Z')
a++;
if(str[i]>='0'&&str[i]<='9')
x++;
}
if(n!=0&&a!=0&&x!=0)
{
printf("yes");
}
else
{
printf("no");
}
}
