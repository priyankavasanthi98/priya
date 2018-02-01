#include<stdio.h>
void main()
{
char str[40];
int counter,count=0;
printf("enter the string:");
gets(str);
for(counter=0;str[counter]!=null;count++)
{
if(str[counter]=' ')
count++;
}
printf("%d",count);
}
