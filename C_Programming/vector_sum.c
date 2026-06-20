#include<stdio.h>
void calcsum(struct vector v1 , struct vector v2,struct vector);
struct vector{
    int x; 
    int y;
};

void calcsum(struct vector v1 , struct vector v2,struct vector);
int main(){
    struct vector v1 = { 5,10};
    struct vector v2 = { 3,7};
    struct vector sum = {0};
    calcSum(v1,v2,sum);
    return 0;  
}

void calcsum(struct vector v1 ,struct vector v2,struct vector sum){
    sum.x = v1.x + v2.x ;
    sum.y = v1.y + v2.y ;
    printf("Sum of X is : %d\n",sum.x);
    printf("Sum of Y is : %d\n",sum.y);
}