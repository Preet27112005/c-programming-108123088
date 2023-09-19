
#include<math.h>
#include<stdio.h>
int main()
{
int x,n;

printf("Please enter no. of units:-");
scanf("%d",&x);	
		
	if(1<x<100)
	n=2;
	else if(100<=x<250)
	n=5;
	else if(250<=x<500)
	n=10;
	else 
	n=20;
	
   int y=n*x;
   printf("the electricity bill according to your given no. of units is %d",y);
   
   return 0;	
	
}
