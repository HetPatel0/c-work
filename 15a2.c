//2. Count total number of negative elements in array.
#include<stdio.h>
void main(){
    int a[5],b[5],i,c=0;
    for(i=0;i<5;i++){
        printf("Enter you num in arr[%d]",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        if(a[i]<0){
            c++;
        }

    }
   printf("No of negative element is %d",c);
    
    
}