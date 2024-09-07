#include<stdio.h>
#include<malloc.h>
#include"singly.h"

void main(){
      struct node *create();
      struct node *reverse();
      void display();

     struct node *head=NULL;
     head=(struct node *)malloc(sizeof(struct node));

     head->next=NULL;

     printf("Create List");
     head=create(head);

     printf("The created List is:");
     display(head);

     head=reverse(head);

     printf("The reversed list is:");
     display(head);

}

