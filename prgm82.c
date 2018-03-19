#include<stdio.h>
void main()
{
	float l,b;
	float area;
	printf("\n enter the length and breadth:");
	scanf("%f%f",&l,&b);
	area=l*b;
	printf("\n%0.5f",area);
	getch();
}
