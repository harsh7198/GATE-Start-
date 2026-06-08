#include<stdio.h>

int main(){
    int n ;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements : ",n);
    for(int i = 1 ; i<=n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements is :  ");
    for(int i = 1 ; i<=n ; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}