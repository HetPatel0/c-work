#include<stdio.h>
void main() {
    double a,b;
    char sign;
    printf("Enter your opreation: ");
    scanf("%c",&sign);

    printf("Enter your first number : ");
    scanf("%lf",&a); 
    
    printf("Enter your second  number : ");
    scanf("%lf",&b);

    if(sign=='+')
    {
        printf("%0.2lf",a+b);
    }
    else
    {
      if(sign=='-')
      {
        printf("%0.2lf",a-b);
      }  
      else 
      {
        if(sign=='*')
        {
            printf("%0.2lf",a*b);
        }
        else 
        {
            if(sign=='/')
            {
                if(b==0)
                {
                    printf("Answer is undefined");
                }
                else
                {
                    printf("%0.2lf",a/b);
                }
            }
        }
      }
    }
   


}