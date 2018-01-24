#include<stdio.h>
void main()
{
int min,hour,m;
printf("enter the minutes");
scanf("%d",&min);
hour=min/60;
m=min%60;
printf("%d %d",hour,m);
}
