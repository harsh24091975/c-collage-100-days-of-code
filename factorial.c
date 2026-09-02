#include <stdio.h>
        int main(){
        int a,s=1;
        printf("givr your number");
        scanf("%d",&a);
        while(a>0){
	s=s*a;
	a--;
	}
        printf("the factorial is %d\n",s);
        return 0;
        }



