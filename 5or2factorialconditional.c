#include<stdio.h>
int main() {
int a,num;
printf("Enter your first number : ");
scanf("%d",&a);


num =(a%5==0 || a%2==0)?printf("yes it is"):printf("no it's not");


}