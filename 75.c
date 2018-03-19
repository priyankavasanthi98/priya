#include<stdio.h>
void main()
{
char a[10];
int i,b,l;
scanf("%s",a);
l=strlen(a);
b='*';
a[l/2]=b;
if((l%2)==0)
{
a[(l-1)/2]=b;
}
printf("%s",a);
}
