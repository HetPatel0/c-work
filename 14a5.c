//5. Read five person height and weight and count the number of person having height greater than 170 and weight less than 50.
    #include<stdio.h>
void main() {
    int n1,n2;
      printf("ENter n1& n2: ");
    scanf("%d %d",&n1,&n2);
    int arr[n1],arr[n2],i,j,h=0,w=0;
  
    for(i=0;i<n1;i++){
        printf("enter person's Height in cm arr[%d]",i);
        scanf("%d",&arr[i]);
        
    }
    for(j=0;j<n2;j++){
        printf("enter person's Weight in kg arr[%d]",j);
        scanf("%d",&arr[j]);
    }
    for(i=0;i<5;i++){
      if(arr[i]>170){
        h++;
      }
    }

    for(j=0;j<5;j++){
        if(arr[j]<50){
            w++;
        }
    }
printf("Persons having height greater than 170cm are %d and weight lesser than 50kg is %d",h,w);

}
