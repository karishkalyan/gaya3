#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i;
printf("\n enter the string:");
scanf("%s",a);
for(i=0;i!="\0";i++)
{
if((a[i]==0)&&(a[i]==1))
{
printf("\n binary representation");
}
else
{
printf("\n no binary representation");
}
}
return0
}
