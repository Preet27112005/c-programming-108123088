#include<stdio.h>
#include<math.h>
int main()
{float B,R,hra,da,ta;
printf("Enter your base salary and your region tier respectively:-");
scanf("%f %f",&B,&R);
da=0.48*B; ta=0.08*B;
if (R==1)
hra=0.27*B;
else if (R==2)
hra=0.24*B;
else if (R==3)
hra=0.16*B;
else if (R==4)
hra=0.12*B;

float gross= B+hra+da+ta;
printf("Your gross salary is %f ",gross);

}
