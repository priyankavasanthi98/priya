#include<stdio.h>
void main()
{
int i,b=0;
char a[10];
scanf("%s",&a[i]);
while(a[i]!='\0')
{
if((a[i]>='a')&&(a[i]<='z'))
{
b+=1;
}
i++;
}
printf("%d",b);
}
