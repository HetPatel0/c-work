//3. Print multiplication table of a given number.
#include<stdio.h>
void main () {
    int i,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d= %d\n",n,i,i*n);

    }
}