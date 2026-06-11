#include<stdio.h>

  struct student {
    int roll; 
    float cgpa ; 
    char name[100];
  };
int main(){
   struct student s1 = {16,7.9,"Harsh"};
   printf("Name is : %s\n",s1.name);
   printf("Name is : %d",s1.roll);
    return 0;
}