#include<stdio.h>

int main(){

     FILE *fptr; 
     fptr = fopen("text.txt","r");
    printf("%c\n",getc(fptr));
    printf("%c\n",getc(fptr));
    printf("%c\n",getc(fptr));
    printf("%c\n",getc(fptr));
    printf("%c\n",getc(fptr));

    return 0;
}