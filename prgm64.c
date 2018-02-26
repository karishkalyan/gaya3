#include<stdio.h>
void main()
{
int a,b,s;
printf("\n enter two numbers:");
scanf("%d%d",&a,&b);
s=a+b;
if(s%2==0)
printf("\n even");
else
printf("\n odd");
getch();
}
