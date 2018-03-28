#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	printf("\n enter the string:");
	scanf("%s",&str);
	strcat(str,".");
	printf("\n%s",str);
	getch();
  }
