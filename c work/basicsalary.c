#include<stdio.h>
void main()  {
double a;
printf("Enter Your salary :");
scanf("%lf",&a);

if(a>=10000 && a<20000)
{
    a= a +(a*20)/100 +  (a*80)/100;
    printf("Your Gross salary is: %lf",a);
}
else 
{
    if(a>=20000 && a<30000)
    {
       a= a +(a*25)/100 +  (a*90)/100;
    printf("Your Gross salary is: %lf",a); 
    }
    else 
    {
        if(a>=30000)
        {
            a= a +(a*30)/100 +  (a*95)/100;
            printf("Your Gross salary is: %lf",a); 
        }
    }
}

}