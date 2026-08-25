#include<stdio.h>
int main (){
float cp,sp,profit,loss,per;
printf("enter cost price");
scanf("%f",&cp);
printf("enter selling price");
scanf("%f",&sp);

if(sp>cp){
profit=sp-cp;
per=(profit/cp)*100;
printf("profit percentage is %.2f",per);
}
else if(cp>sp){
loss=cp-sp;
per=(loss/cp)*100;
printf("loss percentage is %.2f",per);
}
else{
printf("no profit no loss");
}
return 0 ;
}
