#include<stdio.h>
int main() {
int a,b,num;
printf("Enter your first number : ");
scanf("%d",&a);

printf("Enter your ssecond number : ");
scanf("%d",&b);

num=(a>b)?a:b;
printf("Biggest num is =%d",num);
}