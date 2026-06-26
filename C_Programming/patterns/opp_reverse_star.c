#include<stdio.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
  
     if(n >= 3){
        for(int i = 1 ; i <=n; i++){
        
        for(int j = 1 ; j <=n ; j++){
            if(i<=j){
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
        printf("For printing hollow pattern , number must be greater or equal 3 ");
    }


    return 0;
}