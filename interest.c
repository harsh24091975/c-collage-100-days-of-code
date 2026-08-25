#include <stdio.h>
#include <math.h>

int main(){
 double p=10000;
 double t=10;
 double i=10;
 double n=2;
 double power= n*t;
 double interest= (p*t*i)/100;
 printf("interest is %.2f \n", interest);
 double a = p*(pow((1+(i/(100.0*n))),power))-p;
 printf("compound is %.2f\n", a);
  return 0;
}
