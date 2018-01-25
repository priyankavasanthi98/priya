#include<stdio.h>
int main()
{
int i,j,n,a[10],s,m;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=n;j++)
{
for(m=j+1;m<=n;m++)
{
if(a[j]>=a[m])
{
s=a[j];
a[j]=a[m];
a[m]=s;
}
}
}
printf("%d",s);
return 0;
}
