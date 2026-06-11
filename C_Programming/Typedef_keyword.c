#include<stdio.h>
#include<string.h>
typedef struct student {
    int roll;
    float marks ; 
    char name[100];
} stu ; // short name 

int main(){
    // struct student s1 ; 
    stu s1;
    s1.roll = 1664 ;
    s1.marks = 9.8 ;
    strcpy(s1.name , "Harsh");
    printf("Roll is : %d\n", s1.roll);
    printf("Name is : %s",s1.name);
    return 0;
}