#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,n,i;
	
	printf("Enter no. of characters in strings to be concated and string in which concatd happen respectively:");
	scanf("%d %d",&n,&x);
	
	printf("Enter no. of characters to be concatenated:");
	scanf("%d",&y);
	
	char a[n];
	char b[x+y+1];
	printf("Enter the string which is concated:");
	scanf("%s",a);
	
	printf("Enter the string in which concatenation is occuring:");
	scanf("%s",b);
	
	for(i=0;i<y;i++)
	{
		b[x+i]=a[i];
	}
	b[x+y]='\0';
	printf("\n%s",b);

	
	return 0;
	
	

}
