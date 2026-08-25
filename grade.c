#include<stdio.h>
int main (){
int p;
printf("enter percentage");
scanf("%d",&p);
if(p>=90 && p<=100){
printf("grade A");
}
else if(p>=80 && p<=89){
printf("grade B");
}
else if(p>=70 && p<=79){
printf("grade C");
}
else if(p>=60 && p<=69){
printf("grade D");
}
else if(p>=0 && p<60){
printf("grade F");
}
return 0 ;
}
