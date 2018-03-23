#include<stdio.h>
#include<string.h>
void main()
{
int n,i,j,count=0;
char a[20];
printf("enter a string:");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count=1;
break;
}
else
{
continue;
}
}
}
if(count==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
