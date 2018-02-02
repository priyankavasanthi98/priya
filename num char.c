#include<stdio.h>
void main()
{
char str[40];
int i,count=0;
printf("enter the string");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if((str[i]>='0')&&(str[i]<='9'))
count++;
}
printf("%d",count);
}
