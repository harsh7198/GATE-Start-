#include<stdio.h>
int main(){
    int n , pos , small , i;
    printf("Enter Size of an array : ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Arr[%d] :", i);
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    pos = 0 ;
    for(i = 1 ; i < n ; i++){
        if(arr[i] < small){
            small = arr[i] ;
            pos = i ;
        }
    }
    printf("Smalles element is : %d \n", small);
    printf("Position is : %d " , pos);
    
    
    return 0;
}