#include<stdio.h>
void main()
{
int m1,m2,h1,h2,n,k;
printf("enter the hours");
scanf("%d %d",&h1,&h2);
printf("enter the minutes");
scanf("%d %d",&m1,&m2);
n=(h1-h2);
k=(m1-m2);
printf("%d %d",n,k);
}
