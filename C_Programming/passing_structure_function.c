#include<stdio.h>

 struct student {
    int roll; 
    float cgpa ; 
    char name[100];
  };

void printInfo(struct student s1);
int main(){
    struct student s1 = {16,7.9,"Harsh"};
    printInfo(s1);
    printf("Student roll = %d\n",s1.roll); // call by value


    return 0;
}

void printInfo(struct student s1){
    printf("Student Information");
    printf("Student roll = %d\n",s1.roll);
    printf("Student CGPA = %f\n",s1.cgpa);
    printf("Student name = %s\n",s1.name);

    s1.roll = 1660;
}