#include<stdio.h>
#include<string.h>

void slice(char name[], int n, int m);

int main() {
    char name[100];
    int n, m;

    printf("Enter Word : ");
    scanf("%s", name);

    printf("Enter start index: ");
    scanf("%d", &n);

    printf("Enter end index: ");
    scanf("%d", &m);

    slice(name, n, m);

    return 0;
}

void slice(char name[], int n, int m) {

    if(n < 0 || m >= strlen(name) || n > m) {
        printf("Invalid index");
        return;
    }

    for(int i = n; i <= m; i++) {
        printf("%c", name[i]);
    }
}