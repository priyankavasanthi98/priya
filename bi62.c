#include<stdio.h>
#include<string.h>
void main()
{
char str[40];
int i,c=0,k;
scanf("%s",&str);
for(i=0;str[i]!=NULL;i++)
{
}
  for(k=0;k<i;k++)
  {
    if(str[k]=='0'||str[k]=='1')
    c++;
  }
if(c!=0)
{
printf("yes");
}
else
{
printf("no");
}
}
