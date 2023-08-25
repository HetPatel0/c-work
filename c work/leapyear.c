#include<stdio.h>
int main() {
 int year ;

 
printf("Enter you year here : ");
scanf("%d",&year);


 if((year%4 == 0) && (year %100 != 0) || (year % 400 == 0))  {
    printf("Year is leap year");

  } 
 else
  {
    printf("Year is not a leap year");
 }
 return 0;

}
