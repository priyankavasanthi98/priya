#include<stdio.h>
#include<string.h>
void main()
{
char str[20];
int i,count=0,b=0,a=0,d=0;
printf("enter the string:");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if((str[i]>=0)&&(str[i]<=9))
{
d++;
}
else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
{
a++;
}
else if(str[i]=' ')
{
b++;
}
else
{
count++;
}
}

printf("%d",count);
}
