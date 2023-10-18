//1. Read values in two-dimensional array and print them in matrix form.
#include<stdio.h>
void main() {
    int n,m;
    printf("Enter your n&m");
    scanf("%d %d",&n,&m);
    int i,j,a[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++){
            printf("Enter element");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++){
           printf("%d\t",a[i][j]);

        }
        printf("\n");
    }


}