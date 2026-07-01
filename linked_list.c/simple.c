#include<stdio.h>
#include<stdlib.h>
// basic skeleton of linked list 
struct node {
    int data ;
    struct node *next;
};

struct node *start = NULL ;
int main(){

     struct node *newnode , *temp ;
     newnode = (struct nide * )malloc(sizeof(struct node));
     printf("Enter data : ");
     scanf("%d", &newnode -> data);

    newnode -> next = NULL ;
    start = newnode ; 
    return 0;
}