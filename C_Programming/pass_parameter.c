#include<stdio.h>
 void Sum();
 void Mul();
 
 int main(){
     int p,q ;
     printf("Enter A : ");
     scanf("%d", &p);
     printf("Enter B : ");
     scanf("%d", &q);
     Sum(p,q);
     Mul(p,q);
     
     
     return 0 ;
 }
 
 void Sum(int a , int b ){
     int sum = a + b ; 
     printf("Sum is : %d\n", sum) ;
 }
 
 void Mul(int a , int b){
     int mul =  a * b ;
     printf("Multiplication is : %d\n", mul) ;
 }