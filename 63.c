#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[30];
int i,c=1;
printf("enter the string:");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if(str[i]==' ')
{
c=c+1;;
}
}
printf("%d",c);
}
