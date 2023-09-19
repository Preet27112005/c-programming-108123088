#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Please Enter the 3 side length of your triangle :");
	scanf("%d %d %d ",&a,&b,&c);
	
	if(a==b==c)
	{printf("given triangle is an equilateral triangle");}
	else if(a==b||b==c||c==a)
	{printf("given triangle is an isoceles triangle");}
	else
	{printf("given triangle is scalane triangle");}
	
}
