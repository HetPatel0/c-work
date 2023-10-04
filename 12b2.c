//2. Estimate the value of the mathematical constant e. (Formula: 𝑒=1+1/1!+1/2!+1/3!+1/4!…)
#include<stdio.h>
void main(){
    int i,n;
    printf("enter N");
    scanf("%d",&n);
    double e=1.0,fac=1.0;

    for(i=1;i<=n;i++) {
        fac*=i;
        e+=1.0/fac;
    }
printf("e= %f",e);
}