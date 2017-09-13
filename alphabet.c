#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter any alphabet");
scanf("%c",&ch);
if((ch>=65&&ch<=90)!!(ch>=97&&ch<=122))
{
printf("entered character is alphabet");
}
else
{
printf("entered character is not an alphabet");
}
getch();
}
