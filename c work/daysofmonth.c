#include<stdio.h>
void main () {
    int i;
    printf("enter your number\n");
    scanf("%d",&i);

       i=i%13;
    
    switch(i)
    {
        case 1:
        printf("januarary : 31");
        break;
        
        case 2:
        printf("feb : 28");
        break;

        case 3:
        printf("march : 31");
        break;

        case 4:
        printf("april : 30");
        break;

        case 5:
        printf("may : 31");
        break;

        case 6:
        printf("june : 30");
        break;

        case 7:
        printf("july : 31");
        break;

        case 8:
        printf("august : 31");
        break;

        case 9:
        printf("september : 30");
        break;

        case 10:
        printf("octumber : 31");
        break;

        case 11:
        printf("november: 30");
        break;

        case 12:
        printf("december: 31");
        break;

                
    }
}