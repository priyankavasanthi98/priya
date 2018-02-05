#include<stdio.h>
void main()
{
int a[3],i,j,t;
  for(i=0;i<3;i++)
    
  {
    for(j=i+1;j<3;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
    printf(%d",a[i]);
           }
           }
