#include<stdio.h>
#include<math.h>
int main()
{
	
int a;
printf("Enter a year:-");
scanf("%d",&a)	;
	
	
	if(a%4==0&&(a%400==0||a%100!=0))
	{printf("given year is a leap year\n\n\n");
	}
	else{printf("given year is not a leap year\n\n\n");
	}
	
//method:-2
	
  int c=a%4==0&&(a%400==0||a%100!=0);
	//printf("%d\n",c);
	int d=(c==1)?(printf("given year is leap year\n")):(printf("given year is not a leap year\n"));
	printf("%d",d);
}
