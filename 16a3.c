#include <stdio.h>

int main(void) {
  
int a[4][5],i,j,c=1,d=1;
for(i=0;i<4;i++) {
        for(j=0;j<5;j++){
            printf("Roll no is: %d  ",c);
            c++;
            
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++) {
        for(j=0;j<5;j++){

           printf("mark of roll no %d %d\t\n",d,a[i][j]);
           d++;

        }
        
    }
}