#include<stdio.h>
int main (){
int n;
printf("enter number");
scanf("%d",&n);
if(n>=0){
if(n==0){
printf("number is zero");
}
else{
printf("number is positive");
}
}
else{
printf("number is negative");
}
return 0 ;
}
