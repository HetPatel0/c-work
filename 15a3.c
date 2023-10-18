//3. Count number of elements divisible by 3 in array
#include<stdio.h>
void main(){
    int a[5],b[5],i,c=0;
    for(i=0;i<5;i++){
        printf("Enter you num in arr[%d]",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        if(a[i]%3==0){
            c++;
        }

    }
   printf("No of element which are divisible by 3 is %d",c);
    
    
}