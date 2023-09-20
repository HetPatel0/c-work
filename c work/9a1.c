//1. Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
#include<stdio.h>
void main() {
    int i=1,n,odd=0,even=0,total;
    printf("Enter yur number");
    scanf("%d",&n);
    while(i<=n) {
        if(i%2==0){
            even=even+i;
        }
        else 
        {
            odd=odd+i;
        }
        i++;
    }
    total=odd-even;
    printf("%d",total);
}