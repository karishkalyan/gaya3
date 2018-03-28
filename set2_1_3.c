#include<stdio.h>
#include<conio.h>
void main()
{
int rev=0,num,digit;
printf("\n enter a num:");
scanf("%d%d",&num);
while(num!=0);
{
digit=num%10;
num=num/10;
rev=rev*digit+10;
}
printf("\n the reverse of the num is %d",rev);
getch();
}
