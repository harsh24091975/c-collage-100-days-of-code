#include<stdio.h>
int main(){
    int n,remainder,product=1;
    printf("enter number");
    scanf("%d",&n);
    while(n>0){
        remainder=n%10;
        if(remainder%2!=0){
            product=product*remainder;
        }
        n=n/10;
    }
    printf("product is %d",product);
return 0;
}