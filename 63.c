#include<stdio.h>
#include<conio.h>
void main()
{
char str[30];
int i,c=0;
printf("enter the string:");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if(str[i]==' ')
{
c++;
}
printf("%d",c);
}
}
