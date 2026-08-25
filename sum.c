#include <stdio.h>
int main(){
int a,s;
printf("give number");
scanf("%d",&a);
while(a>0){
s=s + a--;
}
printf("sum is %d",s);
return 0 ;
}
