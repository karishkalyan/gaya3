#include <stdio.h>
 void main() 
{
int a,i,c,b;
printf("enter the numbers ");
scanf("%d %d",&a,&b);
for(i=1;i<a;i++)
{
	if((a%i==0)&&(b%i==0))
	{
		c=i;
	}
}
printf("%d",c);
	getch();
}  
