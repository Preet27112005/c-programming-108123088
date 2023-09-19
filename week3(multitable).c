#include<math.h>
#include<stdio.h>
int main()
{
	
int i,n;
printf("Enter number whose multiplication table required:-")	;
scanf("%d",&n);
	
	for (i=1;i<11;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	
	return 0;
}
