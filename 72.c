#include<stdio.h>
#include<string.h>
void main()
{
char ch[60];
int i;
scanf("%c",&ch);
for(i-0;ch[i]!='\0';i++)
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("yes");
  break;
}
else
{
printf("no");
  break;
}
}
}
