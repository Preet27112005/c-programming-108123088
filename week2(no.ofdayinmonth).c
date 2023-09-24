#include<stdio.h>
#include<math.h>
int main()
{
  int y,m,x;
  
  printf("Enter any year:");
  scanf("%d",&y);
  printf("Enter month number:");
  scanf("%d",&m);
  
  if(m==1||m==3||m==5||m==7||m==9||m==11)
  printf("no. of days in this month is 31");
  else if((y%4==0&&(y%400==0||y%100!=0))&&(m==2))
  printf("no. of days in this month is 29");
  else if(m==2)
  printf("no. of days in this month is 28");
  else if (m==4||m==6||m==8||m==10||m==12)
  printf("no. of days in this month is 30");
  	
}
