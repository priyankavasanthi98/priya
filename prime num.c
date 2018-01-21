#include<stdio.h>
void main()
{ 
int n=5,i,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{ 
if((n%1)==0)
count++;
}  
if(count==0)
{ 
printf(" %d yes given number is not a prime",n);
}  	
else
{ 
printf("%d given number is a prime number",n);
}  
}
