#include<stdio.h>
void main (){
    int s1,s2,s3,s4,s5;
    float pr;


    printf(" enter all subject marks one by one: ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    
    pr = (s1+s2+s3+s4+s5)/5;
    if(pr<35){
        printf("FAIL");
    }
    else if(pr>=36 && pr<=45) {
        printf("PASS");
    }
    else if (pr>=46 && pr<=60)
    {
        printf("SECOND CLASS");

    }
    else if (pr>=61 && pr<=70)
    {
        printf("FIRST CLASS");

    }
    else if (pr>70)
    {
         printf("DISTINCTION");
    }


}