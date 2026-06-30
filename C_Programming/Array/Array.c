#include<stdio.h> // insert , print , sum , mean 
int main(){
    int n ; 
    printf("Enter Size : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("arr[%d] :",i);
        scanf("%d",&arr[i]);
    }
    printf("Elements are : ");
    for(int i = 0 ; i < n ; i++){
        printf("%d  ",arr[i]);
    }
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
       count = count + arr[i];
    }
    printf("\nsum is : %d\n",count);
    
    float mean = count / n ;
    printf("Mean is : %f", mean);
    
    
    
    return 0;
}
