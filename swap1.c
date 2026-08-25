#include<stdio.h>
int main (){
int a = 5;
int b= 10;
int c= 0;
printf ("the original value of a &b is %d  %d \n", a , b );
c=a;
a=b;
b=c;
printf (" the new value of a is  %d \n" , a );
printf (" the new value of  b is %d \n", b);

return 0 ;
}
