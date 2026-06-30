#include<stdio.h>
int main(){
    int n1 , n2 ,i;
    printf("Enter size of First Array : ");
    scanf("%d", &n1);
    int arr1[n1];
    for(i = 0 ; i < n1 ; i++){
        printf("Enter array[%d] :", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second Array : ");
    scanf("%d", &n2);
    int arr2[n2];
    for(i = 0 ; i < n2 ; i++){
        printf("Enter array[%d] :", i);
        scanf("%d", &arr2[i]);
    }
     int k = 0;
    int arr3[n1 + n2];
    for(i = 0 ; i < n1 ; i++){
        arr3[k] = arr1[i];
        k++;
    }
    for(i = 0 ; i < n2 ; i++){
        arr3[k] = arr2[i];
        k++;
    }
    printf("Merge Array is : ");
    for(i = 0 ; i < k ; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}