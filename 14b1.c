//1. Count numbers higher than the average of an array.
#include<stdio.h>
int main() {
    int n;
     printf("ENter n: ");
    scanf("%d",&n);

       int arr[n],i,max,min,sum=0;
    float avg;
   
    for(i=0;i<n;i++){
        printf("enter your num in arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg =(float)sum/n;
    printf("%0.2f",avg);
    for(i=0;i<n;i++) {
        if(arr[i]>avg){
            printf("%d\n",arr[i]);
        }
    }


    return 0;
}