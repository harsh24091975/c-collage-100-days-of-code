#include <stdio.h>
int main(){
int n1,n2;

printf("enter number 1\n");
scanf("%d", &n1);
printf("enter number 2\n");
scanf("%d", &n2);
int x = n1 + n2;
int y= n1 -n2;
int z= n1*n2;
float a= n1/n2;
printf("the sum is %d\n",x);
printf("the difference is %d\n",y);
printf("the product is %d\n",z);
printf("the quotient is %.2f\n",a);
return 0 ;
}
