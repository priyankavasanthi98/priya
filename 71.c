#include<stdio.h>
#include<string.h>
void main()
{
char a[20],c[20];
int n,i,j=0,k;
printf("enter the string:");
scanf("%s",a);
n=strlen(a);
for(i=n-1;i>=0;--i)
{
c[j]=a[i];
j++;
}
k=strcmp(c,a);
if(k==0)
printf("yes");
else
printf("no");
}
