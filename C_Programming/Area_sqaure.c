#include<stdio.h>

int Area(int a);

int main(){
    int num;
    printf("Enter Size of Square :");
    scanf("%d",&num);
    printf("Area of Square is : %d",Area(num));
}

int Area(int a){
    return a * a ;
}