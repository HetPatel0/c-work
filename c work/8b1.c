//1. Print number and its square root for 0 to 9.
#include<math.h>
#include<stdio.h>
void main() {
    int i=0;
    float n=9,sq;
    while(i<=n){
    sq=sqrt(i);
        printf("%d \t%f\n",i,sq);
        i++;
    }
}