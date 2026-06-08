#include<stdio.h>

// declaration / prototype
void change(int x){
    x = 100 ;
}

int main(){
    int a = 10 ;
    printf("Before : %d\n",a);
    change(a);
    printf("After : %d\n,a");
    return 0;
}

// X does not change 