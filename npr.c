#include<stdio.h>
int factorial(int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact =fact*i;
    }
return fact;
}


int main(){
    int n,r;
    printf("enter the first numbr : ");
    scanf("%d",&n);
    printf("enter the first numbr : ");
    scanf("%d",&r);
    int nfact= factorial(n);
    int rfact= factorial(r);
    

    
    printf("%d",(nfact/(rfact)));
    return 0;
}