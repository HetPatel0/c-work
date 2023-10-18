#include <stdio.h>

int main(void) {
  
int a[4][5],i,j;
for(i=0;i<a;i++) {
        for(j=0;j<5;j++){
            printf("Enter roll no with  marks");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++) {
        for(j=0;j<5;j++){
           printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
}