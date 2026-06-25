#include<stdio.h>

int main(){
      int r,c;
      printf("Enter Rows :");
      scanf("%d", &r);
      printf("Enter Colums :");
      scanf("%d", &c);
     for(int i = 1 ; i <=r; i++){
        for(int j = 1 ; j <=c ; j++){
            printf(" * ");
        }
        printf("\n");
     }
     printf("Pattern printed successfully...");
    return 0;
}