#include<stdio.h>
#include<math.h>
int main() {
    int n;
     printf("ENter n: ");
    scanf("%d",&n);

       int arr[n],i;
       float sum=0,gm,sumh=0,hm;
    float avg,mul=1;
   
    for(i=0;i<n;i++){
        printf("enter your num in arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        mul=mul*arr[i];
        sumh=sumh+(1/(float)arr[i]);

    }
    avg =(float)sum/n;
    printf("Average mean is %f",avg);
    gm=pow(mul,(float)1/n);
    printf("Geomatric mean is %f",gm);
    hm=(float)n/(sumh);
    printf("harmonic mean is %f",hm); 
    return 0;
}
