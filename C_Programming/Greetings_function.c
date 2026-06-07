#include<stdio.h>

void Namaste();
void Bonjour();
int main(){
    char ch;
    printf("Are you Indian aur french ? (I/F)");
    scanf("%c",&ch);
    if(ch == 'i' || ch == 'I'){
        Namaste();
    }
    else if (ch == 'f' || ch == 'F'){
        Bonjour();
    }
    else {
        printf("Invalid Choice");
    }

    return 0;
}

void Namaste(){
    printf("Namste ! ");
}
void Bonjour(){
    printf("Bonjour ! ");
}