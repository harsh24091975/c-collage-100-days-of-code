#include<stdio.h>
int main (){
int a,b,c;
printf("enter side 1");
scanf("%d",&a);
printf("enter side 2");
scanf("%d",&b);
printf("enter side 3");
scanf("%d",&c);

if(a+b>c && a+c>b && b+c>a){
if(a==b && b==c){
printf("triangle is equilateral");
}
else if(a==b || b==c || a==c){
printf("triangle is isosceles");
}
else{
printf("triangle is scalene");
}
}
else{
printf("invalid triangle");
}
return 0 ;
}
