#include<stdio.h>
void main()
{
int a=10,b=20;
printf("values of a&b before swapping %d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("values of a&b after swapping %d %d",a,b);
}
