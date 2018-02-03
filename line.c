#include<stdio.h>
void main()
{
char str[50];
int i,count=0;
printf("enter the string:");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if(str[i]=='.')
{
count++;
}
printf("%d",count);
}
}
