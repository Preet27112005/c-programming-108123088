#include<stdio.h>
#include<math.h>
int main()
{ int a,b,c,T;
printf("Enter any 3 integer numbers:-");
scanf("%d %d %d",&a,&b,&c);
 if(a>=b&&a>c)
 {
   printf("the greatest of all is a=%d\n\n",a);}
 else if(b>c)
 {
   printf("the greatest of all is b=%d\n\n",b);}
 else
 {
   printf("the greatest of all is c=%d\n\n",c);}
 
 //method:2
 
 T=(a>b&&a>c)?(printf("the greatest of all is a ")):((b>c)?(printf("the greatest of all is b  ")):(printf("the greatest of all is c ")));
 printf("%d %d",T);
 
}
