#include<stdio.h>
void main()
{
int num,digit,rev=0;
printf("\n enter the num:");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
num=num/10;
rev=[rev*10]+digit;
}
printf("\n reversed digit is %d",rev);
getch();
}


