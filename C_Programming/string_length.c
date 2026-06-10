#include<stdio.h>
int main(){
    char name[100];
    printf("Enter name :");
    scanf("%s",&name);

    int count = 0 ;
    for(int i = 0 ; name[i] !='\0'; i++){
        count = count + 1 ; 
    }
    printf("Count is : %d", count);
    return 0;
}