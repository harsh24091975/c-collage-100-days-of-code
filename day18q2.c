#include<stdio.h>
int main(){
    int n1,n2,hcf;
    printf("give number 1");
    scanf("%d",&n1);
    printf("give number 2");
    scanf("%d",&n2);
    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    printf("hcf is %d",hcf);
    return 0;
}