//4. Calculate 𝑥^𝑦 without using power function.
#include<stdio.h>
void main() {
    int x,y,z=1,i=1;
    printf("enter X\n");
    scanf("%d",&x);

    printf("enter X's power\n");
    scanf("%d",&y);


    for(i=1;i<=y;i++){
        if(y==0){
            printf("1");
        }else{
        z=z*x;
      
        }
    }
printf("%d",z);

}
