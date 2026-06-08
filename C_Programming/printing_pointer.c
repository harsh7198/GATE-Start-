#include<stdio.h>
int main(){
   int age = 22 ; 
   int *ptr = &age ;

   //address printing 
   printf("%p\n", &age);
   printf("%u\n", &age);

   printf("%p\n",ptr);

   printf("%p\n",&ptr);
    return 0;
}