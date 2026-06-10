#include<stdio.h>
int main(){

    float star ='*' ; 
    float *ptr = &star ;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %d\n",ptr);
    return 0;
}