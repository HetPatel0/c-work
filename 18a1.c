//1. Add two numbers using function.
#include<stdio.h>
void add(int,int);//fun declaration
void main() {
   int a,b;
   scanf("%d %d",&a,&b);
    add(a,b);// function call 
}
//function ddefine 
void add(int a , int b ) {
    printf("%d",a+b);
   
}