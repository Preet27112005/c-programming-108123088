#include<stdio.h>

int main()
{
	int  t,b,n,i;
	
	printf("Enter no. of charcters in string:");
	scanf("%d",&n);
	
	char a[n];
	
	printf("Enter the string:");
	scanf("%s",a);
	
	for(i=0;i<n-i-1;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	
	printf("\nThe final string is %s",a);
}
