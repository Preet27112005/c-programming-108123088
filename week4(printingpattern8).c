#include<math.h>
#include<stdio.h>
int main()
{
	
	int i,s,n;
	printf("Enter no. of rows you want in pattern:");
	scanf("%d",&n);
	
	
	
	
 for(i=0;i<n;i++)
 {
 	for(s=0;s<n-i-1;s++)
 	printf(" ");
 	printf("* * * * *");
 	printf("\n");
	 }	
	
	return 0;
	
	
	
}
