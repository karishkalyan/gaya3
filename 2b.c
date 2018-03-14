#include<stdio.h>
void main()
{
int fact=1,i,n;
printf("\n enter the num :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n factorial of the num is %d",fact);
getch();
}
