#include<stdio.h>

float celsius(float n);
float fehrenheit(float n);
int main(){
    float n ,f,c;
    printf("-----Choose Once------\n");
    printf("1.C to F\n");
    printf("2.F to C\n");
    scanf("%f", &n);
    if(n == 1){
        printf("Enter C : ");
        scanf("%f",&c);
        printf("Fahrenheit = %.2f\n", celsius(c));
    }
    else if (n == 2 ){
         printf("Enter F : ");
         scanf("%f",&f);
         printf("Celsius = %.2f\n", fehrenheit(f));
    }
    else{
        printf("Invalid choice");
    }
    return 0;
}

float celsius(float n ){
    float F = (n * 1.8) + 32 ;
    return F;
}

float fehrenheit(float n){
    float c = (n -32) / 1.8;
    return c ;
}