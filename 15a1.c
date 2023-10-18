//1. Copy all elements of one array to another
#include<stdio.h>
void main(){
    int a[5],b[5],i;
    for(i=0;i<5;i++){
        printf("Enter you num in arr[%d]",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        b[i]=a[i];
        printf("%d",b[i]);

    }
   
    
    
}