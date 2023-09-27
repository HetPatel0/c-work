//5. Find factorial of the given number.
#include<stdio.h>
void main() {
    int i=1,n,fac=1;
    printf("ENter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        fac=fac*i;
        
    }
    printf("%d",fac);
}