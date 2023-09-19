#include<math.h>
#include<stdio.h>
int main()
{
	
int i,p=1,n;

printf("Enter any number whose fatorial needed:");
scanf("%d",&n);	
	
	
	
for( i=1;i<=n;i++)
{
	p=p*i;
	
	}	
	
printf("factorial of  %d  is %d",n,p);	
	
	
	return 0;
}
