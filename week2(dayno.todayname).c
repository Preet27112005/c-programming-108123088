#include<stdio.h>
#include<math.h>
int main()
{
	int d;
	printf("Enter the day number:-");
	scanf("%d",&d);
	
	switch(d)
	{
		case 1:printf("it is monday");
		       break;
		case 2:printf("it is tuesday"); 
		       break;
		case 3:printf("it is wednesday");
		       break;
		case 4:printf("it is thursday");
		       break;
		case 5:printf("it is friday");
		       break;
		case 6:printf("it is saturday");
		       break;
		case 7:printf("it is sunday workday");
		
	}
}
