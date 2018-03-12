#include<stdio.h>
void main()
{
int n,k,a[10],i,b;
printf("\n enter the number:");
scanf("%d",&n);
printf("\n enter the num:");
scanf("%d",&k);
printf("\n enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(k!=0)
{
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
b=a[i];
}
}
k=k-1;
}
printf("\n the num is:%d",b);
}
getch();
}
