#include<stdio.h>
#include<math.h>
int main (){
double a,b,c,d,r1,r2,real,img;
printf("enter a");
scanf("%lf",&a);
printf("enter b");
scanf("%lf",&b);
printf("enter c");
scanf("%lf",&c);

if(a==0){
printf("not a quadratic equation");
}
else{
d=(b*b)-(4*a*c);

if(d>0){
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("roots are real and different\n");
printf("root 1 is %.2lf\n",r1);
printf("root 2 is %.2lf",r2);
}
else if(d==0){
r1=-b/(2*a);
printf("roots are real and equal\n");
printf("root is %.2lf",r1);
}
else{
printf("roots are complex\n");
}
}
return 0 ;
}
