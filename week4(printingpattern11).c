#inlude<math.h>
#include<stdio.h>
int main()
{
	
	int i,j,s,n;
	printf("Enter an interger number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(s=0;s<2*i;s++)
		printf(" ");
		for(j=0;j<n-i;j++)
		printf("* ");
		printf("\n");
	}
	
	
	for(i=0;i<n;i++)
	{
		for(s=0;s<2*(n-i-1);s++)
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("* ");
		printf("\n");
	}
	
	return 0;
	
}
