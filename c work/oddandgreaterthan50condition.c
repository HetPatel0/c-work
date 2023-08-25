#include<stdio.h>
int main() {
int a,num;
printf("Enter your first number : ");
    scanf("%d",&a);
num=(a%2!=0)?(a>50)?printf("num is greater than 50 and odd"):
printf("num is  not greater than 50 and odd"):printf("num is not odd");
}