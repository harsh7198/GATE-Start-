#include<stdio.h>

void print(int arr[], int n ){
    for(int i = 0 ; i < n ; i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int n ; 
    printf("Enter size : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter elements %d : ", i);
        scanf("%d", &arr[i]);
    }
    print(arr,n);

    return 0;
}