#include<stdio.h>

int main()
{
	int  t,b,n,i;
	char c;
	
	printf("Enter no. of charcters in string:");
	scanf("%d",&n);
	
	char a[n+1];
	
	printf("Enter the string:");
	scanf("%s",a);
	fflush(stdin);
	
	printf("Enter character whose first occurence needed to find:");
	scanf("%s",&c);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==c)
		{
		printf("First occurence of %c is at index no. %d",c,i);
		break ;
	}
	}
	
	return 0;}
