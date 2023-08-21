#include<stdio.h>
int main(){


int h,m,s;
printf("Enter your seconds here:");
scanf("%d",&s);
h=s/3600;
s=s%3600;
m=s/60;
s=s%60;
printf("%d:%d:%d",h,m,s);


}
