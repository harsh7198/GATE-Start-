#include<stdio.h>
int main(){
     int n ;
     printf("Enter n :");
     scanf("%d",&n);
     if(n%2!=0){
         for(int i = 1 ; i <= n ; i++){
         for(int j = 1 ; j <= n ; j++){
             if(i == j  || i + j == n + 1){
                 printf(" * ");
             }
             else{
                 printf("  ");
             }
         }
         printf("\n");
        }
     }else{
         printf("Number is even , please enter odd .");
     }
       
    
    return 0;
}