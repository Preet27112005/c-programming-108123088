#include<math.h>
#include<stdio.h>
int main()
{
	
	
	int i,s,n;
	printf("Enter how many row pattern you want:");
	scanf("%d",&n);
	
	
	
	for(i=0;i<n;i++)
	{
		for(s=0;s<=i;s++)
		printf(" ");
		printf("* * * * *");
		printf("\n");
	}
	
	
return 0;	
	
	
}
