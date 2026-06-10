#include<stdio.h>
int main(){
    
    int arr[5];
    int *ptr = &arr[0];
    for(int i = 0 ; i < 5 ; i++ ){
        printf("%d index : ",i);
        scanf("%d",(ptr+i));
    }
    int count = 0;
    for(int i =0 ; i<5 ; i++){
        if ((arr[i])%2!=0){
            count = count + 1 ;
        }
    }
    printf("Number of Odd is :%d",count);

    return 0;
}