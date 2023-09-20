// check whter entered chracter is in uppercase ,lowercase or special character
#include<stdio.h>
void main() {
    char ch;
    printf("ENTER YOUR ALPHABET : ");
    scanf("%c",&ch);
     
     if(ch>='A' && ch<='Z')
     {  
        printf("CHARACTER IS IN UPPERCASE");
    
    }
    else 
    {
       if(ch>='a' && ch<='z')
     {
        printf("CHARACTER IS IN LOWERCASE");
    
    } 
    else 
    {
        printf("CHARACTER IS SPECIAL CHARACTER");
        
    }
    }
}