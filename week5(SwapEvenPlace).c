#include<math.h>
#include<stdio.h>
int main()
{
	
	int i,j,n;
	printf("Enter the even number of elements in the array:");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the elemnets of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=2)
	{
		int t=a[i];
	  a[i]=a[i+1];
	  a[i+1]=t;	
	}
	printf("output array is ");
	for(i=0;i<n;i++)
	printf("%d , ",a[i]);
}
