#include<stdio.h>
void main()
{
int a,b;
printf("values of a&b before swapping:",a,b);
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("values of a&b after swapping%d %d",a,b);
}
