#include<stdio.h>

int main(){
    int n ,number;
    printf("Enter n : ");
    scanf("%d", &n);
    number = (n/2) + 1 ;
     if(n%2!=0){
        for(int i = 1 ; i <=n; i++){
        
        for(int j = 1 ; j <=n ; j++){
            if(j==number || i == number){
                    printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
      }
    }
    else{
        printf("Even number is invalid...");
    }


    return 0;
}