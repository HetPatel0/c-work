//2. Count number of positive, negative and zero elements from 3 X 3 matrix.

#include<stdio.h>
void main() {
  
    int i,j,a[3][3],p=0,n=0,z=0;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++){
            printf("Enter element");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++){
        if(a[i][j]>0)
        {
            p++;
        }
        else if (a[i][j]<0)
        {
            n++;
        }
        else if(a[i][j]==0)
        {
            z++;
        }
        }
    
    }
printf("NO of pos ,neg and zero are %d %d %d",p,n,z);

}