#include<math.h>
#include<stdio.h>
int main()
{
	
	int i,j,s,n;
	printf("Enter no.of rows you want in pattern:");
	scanf("%d",&n)
;	
	
	
	for(i=0;i<n;i++)
	{
		for(s=0;s<(n-i-1);s++)
		printf(" ");
		for(j=0;j<i+1;j++)
		printf("* ");
		printf("\n");
	}
	
	
	
	return 0;
	
	
}
