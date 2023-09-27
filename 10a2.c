//2. Find the sum and average of different numbers 
//which are accepted by user as many as user wants.
#include<stdio.h>
void main() {
        int n,i=0,sum=0,avg=1;
        while (n!=0)
        {
            printf("enter n");
            scanf("%d",&n);
            sum=sum+n;
            i++;

            
        }
        i=i-1;
        avg=sum/i;
        printf("Sum is %d\n",sum);
        printf("Avg is %d",avg);

        

}