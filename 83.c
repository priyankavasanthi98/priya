#include<stdio.h>
void main()
{
int a,b,i;
char sym;
for(i=1;i<=4;i++)
{
scanf("%d %c %d",&a,&sym,&b);
if(sym=='/')
{
printf("%d\n",a/b);
}
else
{
printf("%d\n",a%b);
}
}
}
