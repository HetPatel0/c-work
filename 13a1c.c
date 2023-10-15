#include<stdio.h>
void main()
{
    int i,n,j;
    printf("enter value :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        //space 
         for(j=1;j<=n-i;j++)
         {
            printf(" ");
         }

        //star
        for(j=1;j<=2*i-1;j++)
        {  if(j%2==1)
             {

            printf("^");
             }
            else{
            printf(" ");
             }
         }
         
        
        printf("\n");
    }
}
