#include<stdio.h>
void main()
{
char str[20];
int i,count=0;
printf("enter the string:");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if((str[i]>=0)&&(str[i]<=9))
count++;
{
elseif((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
count++;
{
elseif(str[i]=' ')
count++;
{
else
count++;
}
}
}
}
printf("%d",count);
}
