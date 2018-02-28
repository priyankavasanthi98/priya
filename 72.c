#include<stdio.h>
#include<string.h>
void main()
{
char ch[60];
int i;
scanf("%c",&ch);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
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
