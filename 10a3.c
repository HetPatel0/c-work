//3. Find whether the given number is prime or not.
#include<stdio.h>
void main() {
    int i,n,count;
    printf("Enter n");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            count=count+1;
        }
        i++;
    }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("NOTPRIME");
    }
