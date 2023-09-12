#include<stdio.h>
#include<math.h>
int main()
{
	float P,R,T,SI,n,A;
	
	printf("Enter principle value ");
	scanf("%f",&P);
	printf("rate of interest in per annum");
	scanf("%f",&R);
	printf("time in years");
	scanf("%f",&T);
	printf("number of times interest applied per T");
	scanf("%f",&n);
	SI=(P*R*T)/100;
	A=P*pow(1+R/n,n*T);
	printf("your simple interest is %f\n your compound interest is %f ",SI,A);
	
	
	
	
	
	
}
