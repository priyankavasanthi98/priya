#include<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
int i,t=0;
printf("enter the string1:");
gets(s1);
printf("enter the string2:");
gets(s2);
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
