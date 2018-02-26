#include<stdio.h>
#include<string.h>
void main()
{
char a[20]="hello world;
int i,count=0;
for(i=0;i<20;i++)
{
 if(a[i]==" ")
 {
 count++;
 }
}
printf("%d",count+1);
getch();
}
