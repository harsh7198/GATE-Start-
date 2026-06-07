#include<stdio.h>
int main(){
   int num ; 
   printf("Enter a number : ");
   do{
    scanf("%d",&num);
    printf("%d\n",num);
   } while(num %2== 0);



    return 0;
}