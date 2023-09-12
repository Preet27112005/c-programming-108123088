#include<stdio.h>
#include<math.h>
int main()
{
	float r,S;
	printf("Enter the radius of circle:-");
	scanf("%f",&r);
	S=3.14*pow(r,2);
	printf("the area of our circle is :-%f",S);
	return 0;
}
