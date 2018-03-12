#include<stdio.h>
int mai()
{
int n,k,a[10],i;
printf("\n enter the number:");
scanf("%d",&n);
printf("\n enter the num:");
scanf("%d",&k);
printf("\n enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(k==a[i])
{
count++;
printf("\n repitition:%d",count);
}
}
return0;
}
