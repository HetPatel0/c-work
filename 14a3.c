//3. Count number of even or odd number from an array of n numbers.
    #include<stdio.h>
void main() {
    int arr[5],i,sum=0,odd=0,even=0;
    for(i=0;i<5;i++){
        printf("enter your num in arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
printf("odd no are %d and even no are %d",odd,even);
}


