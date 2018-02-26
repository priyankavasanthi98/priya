#include<stdio.h>
void main()
{
int n,t,c=0;
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i==1)
    c++;
  }
  if(c==0)
  {
    printf("prime");
  }
  else
  {
    printf("not prime");
  }
}
