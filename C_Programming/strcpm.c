#include<stdio.h>
#include<string.h>
int main(){

    char name[] = "HHHA";
    char name_1[] = "HHHB";

    printf("%d", strcmp(name, name_1));
    return 0;
}