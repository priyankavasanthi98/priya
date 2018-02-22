#include<stdio.h>
#include<string.h>
void main()
{
char str[40];
  int i;
printf("enter the string:");
gets(str);
for(i=0;str[i]!=NULL;i++)
if(str[i]==0&&str[i]==1)
{
printf("yes");
}
else
{
printf("no");
}
}
