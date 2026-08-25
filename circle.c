#include <stdio.h>
int main(){
int r;

printf("enter radius\n");
scanf("%d", &r);
float y= (22.0/7)*2*r;
float z= (22.0/7)*r*r;
printf("the circumfence is %.2f\n",y);
printf("the area is %.2f\n",z);
return 0 ;
}
