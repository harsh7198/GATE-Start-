#include<stdio.h>

int swap(int *a , int *b);

int main(){
    int x ,y ;
    printf("Enter X :");
    scanf("%d", &x);
    printf("Enter Y :");
    scanf("%d", &y);
    swap(&x ,&y);
    printf("X is : %d\n", x);
    printf("Y is : %d", y);
    
    return 0;
}

int swap(int *a , int *b){
    int temp = *a;
    *a = *b ;
    *b = temp ;
}