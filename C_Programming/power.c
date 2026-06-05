#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    int Result;
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B :");
    scanf("%d",&b);
    Result = pow(a,b);
    printf("Result of A of B is : %d",Result);

    return 0;
}