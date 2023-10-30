//3. Count simple interest using function.
#include<stdio.h>
int SI(int p,int r,int n);
void main()
{
    int p,r,n,c,d;
    printf("Enter the amount,interest,no of years:");
    scanf("%d %d %d",&p,&r,&n);
    
    c=SI(p,r,n);
    d=p+c;
    printf("\nThe simple Interest is %d\n",c);
    printf("\nThe total amount is %d\n",d);
}
int SI(int p,int r,int n)
{
    int c=(p*r*n)/100; 
    return c;
}