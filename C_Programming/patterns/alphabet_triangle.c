#include<stdio.h>

int main(){
      int n;
      printf("Enter Rows :");
      scanf("%d", &n);
      
     for(int i = 1 ; i <=n; i++){
        char ch = 'A';
        for(int j = 1 ; j <=i ; j++){
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
     }
     printf("Pattern printed successfully...");
    return 0;
}