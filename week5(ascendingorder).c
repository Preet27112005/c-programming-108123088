#include<math.h>
#include<stdio.h>

int main()
{
	
	int n,i,j,t;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the elemnets of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(j=0;j<n-1;j++)
	{
	for(i=0;i<n-j-1;i++)
	{
		if(a[i+1]<a[i])
	{
	  t=a[i];
	  a[i]=a[i+1];
	  a[i+1]=t;	
	  }
		
	}
}
	printf("output array is");
	for(i=0;i<n;i++)
	printf("%d , ",a[i]);
	
}
