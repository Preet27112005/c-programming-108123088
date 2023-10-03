#include<stdio.h>
#include<math.h>
int main ()
{
	
	int i,n,s,j;
	printf("Enter the no. of rows you want in pattern:");
	scanf("%d",&n);
	
	
	
	for(i=0 ;i<n ;i++ )
	{
		for(s=0;s<2*(n-i-1) ;s++)
		
		  printf(" ");
		
		for(j=0;j<2*i+1;j++)
		
		printf("* ");
		printf("\n");
	}
	
	return 0;
	
}
