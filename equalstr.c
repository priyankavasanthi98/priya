#include<stdio.h>
#include<string.h>
void main()
{
char s1,s2;
int i,t=0;
printf("enter the string:");
gets(str);
for(i=0;s1[i]!=NULL;i++)
{
if(s1[i]==s2[i])
{
t=1;
}
else
{
t=0;
}
}
if(t==1)
{
printf("equal");
}
else
{
printf("not equal");
}
}
