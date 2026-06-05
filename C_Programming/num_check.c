#include<stdio.h>
int main(){
    int number ;
    printf("Enter number : ");
    scanf("%d",&number);
    if(number %2==0){
        printf("Number is Divisible by 2 ");
    }
    else{
        printf("Number is not divisible by 2");
    }
    return 0;
}