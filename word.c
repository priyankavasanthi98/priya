#include<stdio.h>
#include<string.h>
void main()
{
char str[10];
int i=0,f=1;
printf("enter the string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
f=f+1;
}
}
printf("%d",f);
}
