#include<stdio.h>
int main(){
   int n ,i,j;
   printf("Enter Size of Array : ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter %d Elements : ", n);
   for(i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
   }
   int flag = 0 ;
   for(i = 0 ; i < n ; i++){
    for(j = i + 1 ; j < n ; j++){
        if(arr[i] == arr[j] && i!=j){
            flag = 1 ;
            printf("\n Duplicate element found at %d and %d ", i , j );
            }
        }
   }if(flag = 0){
    printf("No Duplicate element found.");
   }

    return 0;
}