#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c,d;
	printf("Enter a number ");
	scanf("%f",&a);
	b=a*1000;
	c=a*100000;
	d=a*pow(10,6);
	printf("given number into meter is %f\ngiven number into centimeter is %f\ngiven number into millimeter is %f",b,c,d);
	
	return 0;
}
