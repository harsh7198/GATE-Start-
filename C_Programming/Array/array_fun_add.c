#include<stdio.h>

void print(int *x){
    printf("%d\n", *x);
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
    for(int i = 0 ; i < n ; i++){
       print(&arr[i]);
    }

    return 0;
}