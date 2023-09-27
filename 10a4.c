#include<stdio.h>
void main() {
    int n,i=0;
    printf("Enter n");
    scanf("%d",&n);
    while(n!=0) {
        n=n/10;
        i++;

    }
    printf("%d",i);
}