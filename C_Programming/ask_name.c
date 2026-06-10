#include<stdio.h>

char firstname[50];
char lastname[50];

void askName();
void askSurname();

int main() {
    askName();
    askSurname();

    printf("Full Name: %s %s", firstname, lastname);

    return 0;
}

void askName() {
    printf("Enter your name: ");
    scanf("%s", firstname);
}

void askSurname() {
    printf("Enter your surname: ");
    scanf("%s", lastname);
}