#include<stdio.h>
void main()
{
int i,j,t,n;
scanf("%d",&n);
  int a[10];
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<3;i++)
    
  {
    for(j=i+1;j<3;j++)
    {
      if(a[i]<a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
    printf("%d",a[n-1]);
           
           }
