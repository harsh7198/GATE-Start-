#include<stdio.h>
#include<string.h>
int main(){

    char name[100];
    printf("Enter your name : ");
    scanf("%s", &name);
    printf("Length is : %d ",strlen(name));
    return 0;
}