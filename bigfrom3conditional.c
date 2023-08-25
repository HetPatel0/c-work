#include<stdio.h>
void main() {
    int a,b,c,num;
    printf("Enter your first number : ");
    scanf("%d",&a);

    printf("Enter your second number : ");
    scanf("%d",&b);

    printf("Enter your third number : ");
    scanf("%d",&c);

    num=(a>b)?(a>c)?a:c : (b>c)?b:c;
    printf("BIGGEST NUM IS: %d",num);
 

}