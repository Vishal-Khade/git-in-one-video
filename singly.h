struct node
{
  int info;
  struct node *next;
};

struct node *create(struct node *head)
{
  int n, count;
  struct node *last, *newnode;
  printf("how many nodes :");
  scanf("%d", &n);
  last = head;
  for (count = 0; count < n; count++)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
    printf("\nEnter the node data:");
    scanf("%d", &newnode->info);
    last->next = newnode;
    last = newnode;
  }

  return (head);
}

void display(struct node *head)
{
  struct node *temp = NULL;
  temp = head->next;

  do
  {
    printf("%d\t", temp->info);
    temp = temp->next;
  } while (temp != NULL);
}

struct node *insert(struct node *head)
{
  struct node *temp = NULL, *p = NULL;
  int pos, i;

  printf("\nEnter the position");
  scanf("%d", &pos);

  for (temp = head, i = 1; i <= pos - 1 && temp != NULL; i++)
  {
    temp = temp->next;
  }

  if (temp != NULL)
  {
    printf("\nEnter the value to insert in singly linked list");
    p = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &p->info);
    p->next = NULL;
    p->next = temp->next;
    temp->next = p;
  }
  else
  {
    printf("Position out of order");
    return (head);
  }
}

struct node *delete(struct node *head)
{
  struct node *temp = NULL, *p = NULL;
  int i, pos;

  printf("\nEnter the position to delete");
  scanf("%d", &pos);
  for (i = 1, temp = head; i <= pos - 1 && temp->next != NULL; i++)
  {
    temp = temp->next;
  }
  if (temp->next != NULL)
  {
    p = temp->next;
    printf("The deleted element is %d", p->info);
    temp->next = p->next;
    free(p);
  }
  else
  {
    printf("\n Position out of order\n");
  }

  return (head);
}

int count(struct node *head)
{
  struct node *temp = NULL;
  int c = 0;
  temp = head->next;
  do
  {
    c++;
    temp = temp->next;
  } while (temp != NULL);

  return c;
}
int search(struct node* head,int key)
{
  struct node *temp=NULL;
  int pos=1;
  temp=head->next;

  do
  {
    if(temp->info==key)
       return pos;
       pos++;
       temp=temp->next;
  } while (temp!=NULL);

    return -1;
}
struct node *reverse(struct node *head)
{
   struct node *t1=NULL,*t2=NULL,*t3=NULL;
   t1=head->next;

   if (t1==NULL)
   {
    return NULL;
   }
   
   t2=t1->next;
   t3=t2->next;
   t1->next=NULL;


   while(t3!=NULL)
   {
    t2->next=t1;
    t1=t2;
    t2=t3;
    t3=t3->next;
    t2->next=t1;
    head->next=t2;
   
   }

    return head;

}