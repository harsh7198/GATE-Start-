#include<stdio.h>

int main(){
      int r;
      printf("Enter Rows :");
      scanf("%d", &r);
     for(int i = r ; i >=1; i--){
        for(int j = i ; j >=1 ; j--){
            printf(" * ");
        }
        printf("\n");
     }
     printf("Pattern printed successfully...");
    return 0;
}