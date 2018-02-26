#include<stdio.h>
void main()
{
int n,i,c=0;
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    c++;
  }
  if(c==0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
