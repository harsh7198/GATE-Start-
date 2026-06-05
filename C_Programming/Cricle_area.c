#include<stdio.h>
int main(){

    float pi = 3.14;
    float r ,Area;
    printf("Enter Radius : " );
    scanf("%f",&r);
    Area = pi * (r * r) ;
    printf("Area is : %f",Area); 

    return 0 ;
}