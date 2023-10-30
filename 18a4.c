// Return the maximum of three floating-point numbers
#include<stdio.h>
float max(float a,float b,float c);
void main()
{
    float a,b,c,d;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("\nEnter second number: ");
    scanf("%f",&b);
    printf("\nEnter third number: ");
    scanf("%f",&c);
    d=max(a,b,c);
    printf("\nThe maximum value is %f\n",d);
}
float max(float a,float b,float c)
{
    if(a>b)
    {
        if(b>c)
        {
            return a;
        }
    }
    else if(a<b)
    {
        if(b>c){
            return b;
        }
        }
        else {
        return c;
        }
}