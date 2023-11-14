#include<stdio.h>

int main()
{
	int  b,n,i;
	
	printf("Enter no. of charcters in string:");
	scanf("%d",&n);
	
	char a[n];
	
	printf("Enter the string in upper case:");
	scanf("%s",a);
	
	for(i=0;i<n;i++)
	{
	  b=a[i]+49;
	  printf("%c",b);
	}
	
		printf("\n%s",a);

	
	return 0;
	
}
