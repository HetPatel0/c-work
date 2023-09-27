//1. Check whether the given number is perfect or not.
#include<stdio.h>
void main(){
    int i=1,n,sum=0;
    printf("ENter yur n");
    scanf("%d",&n);
    
    while(i<n) {
        if(n%i==0) {
            sum=sum+i;
        }
        i++;
    }
    if(sum==n) {
        printf("Perfect");

    }
    else {
      printf("notperfect");
    }
}