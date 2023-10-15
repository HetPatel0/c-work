#include<stdio.h>
void main()
{
    int i,n,j,num=1;
    printf("enter val :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
        
    }           
}