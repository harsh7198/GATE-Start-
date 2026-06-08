#include<stdio.h>

void dowork(int a , int b ,int *sum , int *prod , int *avg);

int main(){
    int a = 3 , b = 5;
    int sum,prod,avg;
    dowork(a,b,&sum,&prod,&avg);
    printf("Sum is : %d\n",sum);
    printf("Prod is : %d\n",prod);
    printf("Avg is : %d\n",avg);
    return 0;
}

void dowork(int a , int b,int *sum , int *prod , int *avg){
    *sum = a + b ;
    *prod = a - b ;
    *avg = (a + b)/2 ;
}