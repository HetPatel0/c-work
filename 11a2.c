//2. Print sum of 1 to n numbers.
#include<stdio.h>
void main() {
    int n,i=1,sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
      
    }
    printf("%d\n",sum);

    
}