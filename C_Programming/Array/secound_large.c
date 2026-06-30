#include<stdio.h>
#include <limits.h>
int main(){
    int n ; 
    printf("Enter size of Array : ");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    int large , S_large ;
    large = arr[0];
    S_large = INT_MIN ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > large){
             S_large = large ;
             large = arr[i];
        }
    }
    printf("Large is : %d\n", large);
    printf(" S Large is : %d\n", S_large);

    
    
    return 0;
}