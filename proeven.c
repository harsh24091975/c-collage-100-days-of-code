#include <stdio.h>
        int main(){
        int a,s=1,b;
        printf("give your number");
        scanf("%d",&a);
        for(int b=1;b<=a;b++){
                if(b%2!=0){
                continue;
                }
		else{
		s=s*b;
		}
                }
        printf("the product is %d\n",s);
        return 0;
        }

