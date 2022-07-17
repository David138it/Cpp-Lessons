#include<stdio.h>
#include<math.h>
void main()
{
  double a,b,c;
  printf("Введи a,b,c\n"); scanf("%lf,%lf,%lf",&a,&b,&c);
  if(a==0)
    printf("x=%5.3f\n",(-c/b));
  else if((b*b-4.0*a*c)>=0)
  {
    printf("x1=%5.3f\n",(-b+sqrt(b*b-4.0*a*c))/(2*a));
    printf("x2=%5.3f\n",(-b-sqrt(b*b-4.0*a*c))/(2*a));
  }
  else
  {
    printf("x1= %5.2f +i* %5.2f\n", -b/(2*a), sqrt(4*a*c-b*b)/(2*a));
    printf("x2= %5.2f -i* %5.2f\n", -b/(2*a), sqrt(4*a*c-b*b)/(2*a));
  }
}