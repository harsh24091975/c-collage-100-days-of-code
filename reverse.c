#include<stdio.h>
int main(){
int a,r=0,rev=0;
printf("give your number");
scanf("%d",&a);
while(a!=0){
r=a%10;
rev=rev*10 + r;
a=a/10;
}
printf("the reverse of the number is %d", rev);
return 0;
}
