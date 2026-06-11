#include<stdio.h>
// (*ptr).code <---->  ptr->code
 struct student {
    int roll; 
    float cgpa ; 
    char name[100];
  };

int main(){
    struct student s1 = {16,7.9,"Harsh"};
    struct student *ptr = &s1;
    printf("Student roll = %d\n",ptr->roll);


    return 0;
}