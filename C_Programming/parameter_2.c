#include<stdio.h>
int sum(int a , int b );
 
 int main(){
     int p,q ;
     printf("Enter A : ");
     scanf("%d", &p);
     printf("Enter B : ");
     scanf("%d", &q);
     int s = sum(p,q);
     printf("%d",s);
     return 0 ;
 }
 
 int sum(int a , int b){
     return a + b;
 }
 
 