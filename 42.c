#include<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
int i,j;
printf("enter the first string:");
scanf("%s",&s1);
printf("enter the second string:");
scanf("%s",&s2);
if(s1[i]==s2[j])
{
printf("%s",s1);
}
else if(s1[i]>s2[j])
{
printf("%s",s1);
}
else
{
printf("%s",s2);
}
}
