#include<stdio.h>
#include<string.h>
void main()
{
s1[20],s2[20];
int i;
printf("enter the first string:");
gets(s1);
printf("enter the second string:");
gets(s2);
for(i=0;str[i]!='\0';i++)
{
if(s1[i]==s2[i])
{
printf("equal");
}
else if(s1[i]>s2[i])
{
printf("%s",s1);
}
else
{
printf("%s",s2);
}
}
}
