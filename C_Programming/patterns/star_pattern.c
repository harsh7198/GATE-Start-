#include<stdio.h>

int main(){
      int r;
      printf("Enter Rows :");
      scanf("%d", &r);
     for(int i = 1 ; i <=r; i++){
        for(int j = 1 ; j <=i ; j++){
            printf(" * ");
        }
        printf("\n");
     }
     printf("Pattern printed successfully...");
    return 0;
}