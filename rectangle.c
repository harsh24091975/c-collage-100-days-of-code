#include <stdio.h>
int main(){
int l,b;

printf("enter lenght\n");
scanf("%d", &l);
printf("enter breadth\n");
scanf("%d", &b);
int y= (l +b)*2;
int z= l*b;
printf("the perimeter is %d\n",y);
printf("the area is %d\n",z);
return 0 ;
}
