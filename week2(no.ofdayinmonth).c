#include<stdio.h>
#include<math.h>
int main()
{
  int y,m,x;
  
  printf("Enter any year:");
  scanf("%d",&y);
  printf("Enter month number:");
  scanf("%d",&m);
  
  if(m==(1||3||5||7||9||11))
  printf("no. of days in this month is 31");
  else if((y%4==0&&(y%400==0||y%100!=0))&&(m==2))
  printf("no. of days in this month is 29");
  else if(m==2)
  printf("no. of days in this month is 28");
  else (m==(4||6))
  printf("no. of days in this month is 30");
  	
}
