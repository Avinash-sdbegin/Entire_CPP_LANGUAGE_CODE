#include<stdio.h>
int main(){
    int n,r;
    printf("enter the first numbr : ");
    scanf("%d",&n);
    printf("enter the first numbr : ");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact =1;
    for(int i=1;i<=n;i++){
        nfact = nfact*i;
    }
for(int i=1;i<=r;i++){
        rfact = rfact*i;
    }
    for(int i=1;i<=n-r;i++){
        nrfact = nrfact*i;
    }
    printf("%d",(nfact/(rfact*nrfact)));
    return 0;
}