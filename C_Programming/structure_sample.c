#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll_num ; 
    float cgpa ; 
   };

int main(){
 
   struct student s1;
   strcpy(s1.name , "Harsh");
   s1.roll_num = 16 ;
   s1.cgpa = 8.3 ; 


   printf("Student name = %s\n", s1.name);
   printf("Student number = %d\n", s1.roll_num);
   printf("Student CGPA = %0.2f\n", s1.cgpa);
    return 0;
}