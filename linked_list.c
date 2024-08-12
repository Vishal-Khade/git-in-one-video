#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"singly.h"


void main(){

    struct node *head=NULL;
    struct node *createlist();
    void display();

    int ch,q=0;
    head=(struct node *)malloc (sizeof(struct node));
    head->next=NULL;

    do
    {
        printf("\n1.create\n2.Display\n3.exit");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
               head=create(head);
            break;
        
        case 2:
               display(head);
            break;

        case 3:
               q=1;
               break;
        }
    } while (q==0);
    

}
