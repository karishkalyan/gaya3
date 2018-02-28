#include<stdio.h>

void main()
{
int n,n1;
printf("\n enter the num:");
scanf("%d",&n);
n1=n+1;
while(n!=0)
{
if(n1%10==0)
{
printf("\n%d",n1);
break;
}
n1++;
}
getch();
}
