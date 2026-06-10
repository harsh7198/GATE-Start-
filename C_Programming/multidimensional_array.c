#include<stdio.h>
int main(){
    // 2 student X 3 marks
    int marks[2][3] ; //_ _ _ | _ _ _
    marks[0][0] = 90;
    marks[0][1] = 95;
    marks[0][2] = 96;
    marks[1][0] = 97;
    marks[1][1] = 98;
    marks[1][2] = 99;
    
    printf("%d",marks[0][2]);

    return 0;
}