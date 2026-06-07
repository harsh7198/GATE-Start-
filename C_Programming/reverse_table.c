#include<stdio.h> // Table print 
int main(){
    
    int number ;
    printf("Enter Number :");
    scanf("%d",&number);
    for(int i=10 ; i>=1 ; i--){
        printf("%d X %d = %d\n",number,i,(number*i));
    }


    return 0;
}