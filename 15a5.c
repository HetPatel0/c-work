//5. Input a string in character array and print string and length of string.
# include<stdio.h>
void main(){
    char a[100];
    printf("Enter string");
    gets(a);
    int i=0,j=0,c=0;
    for(i=0;a!='\0';i++){
        c++;
    }
    puts(a);
    printf("String length:%d",c);

   
}