#include<stdio.h>
int main (){
int s;
printf("enter time in seconds");
scanf("%d",&s);
int h=s/3600;
int rs= s%3600;
int min = rs/60;
int rrs=rs%60;
printf("hr is %d min is %d sec is %d", h, min, rrs);
return 0 ;
}

