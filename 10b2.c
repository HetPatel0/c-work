//2. Find whether the given number is prime or not using flag.
#include<stdio.h>
void main() {
    int i=1,n,count=0;
    printf("Enter n");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            count=count+1;
        }
        i++;
    }
    
    if(count==2){
        printf("Prime");
    }
    else{
        printf("NOTPRIME");
    }
}
