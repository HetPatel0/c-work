//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.
#include<stdio.h>
void main() {
  char o;
  float a,b;
  printf("enter your opreater : ");
  scanf("%c",&o);
  
  printf("Enter a and b : \n");
  scanf("%f %f",&a,&b);

    switch(o){
  case '+':
  printf("sum is %f",a+b);
  break;

    case '-':
  printf("sub is  %f",a-b);
  break;

    case '*':
  printf("mul is  %f",a*b);
  break;

    case '/':
  printf("div is %f",a/b);
  break;

  }
  
  

}