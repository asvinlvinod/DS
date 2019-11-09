#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* start = NULL;
int len;
void append(void);
void add_at_begin(void);
void add_at_after(void);
int length();
void display(void);
void delete_at_beg(void);
void delete_at_end(void);
void delete_at_posi(void);
int main()
{
    int ch;
    while(1)
    {
        printf("\nSingle Linked List Operations : \n");
        printf("1. Insert \n");
        printf("2. Insert at beginnign \n");
        printf("3. Insert Before\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete_at_end \n");
        printf("6. Delete at any Position\n");
        printf("7. Quit \n");
        printf ("8. Display\n\n");

        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: append();
            break;

            case 2: add_at_begin();
            break;

            case 3: add_at_after();
            break;

            case 4: delete_at_beg();
            break;

            case 5: delete_at_end();
            break;

            case 6: delete_at_posi();
            break;

            case 7 : display();
            break;

            case 8: exit(1);
            break;
            
            default:
            printf("Invalid Input.\n\n");

        }

    }
    return 0;
}
void append()
{
    struct node* temp;
    temp =(struct node*)malloc(sizeof(struct node));
    printf("Enter node data : ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(start==NULL) //list is empty
    {
        start = temp;

    }

    else
    {
        struct node * p;
       p = start;
       while(p->link != NULL)
       {
           p = p->link;
       }
       p->link = temp;
     }
}
int length()
{
    struct node *temp;
    int count = 0;

    temp = start;
    if(temp==NULL)
    {
        printf("List is empty\n\n");
    }
    while(temp!=NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}
void display()
{
    struct node* temp;
    temp = start;
    if(temp==NULL)
    {
        printf("List is empty\n\n");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->link;
        }
        printf("\n----------------------------------------------------------------\n\n");
    }
}

void add_at_begin(void)
{
  struct node* temp;
  temp =(struct node*)malloc(sizeof(struct node));
  printf("Enter node data : ");
  scanf("%d",&temp->data);
  temp->link = NULL;
  if(start==NULL) //list is empty
  {
      temp->link=NULL;
      start = temp;

  }
  else
  {
      temp->link=start;
      start=temp;
   }
}

void add_at_after(void)
{
	struct node* temp,*p;
  	int pos,i,num;
    if(start==NULL)
    {
        printf("List is empty!!");
    }

    temp =(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);
    temp->data=num;

    p=start;
    for(i=1;i<pos-1;i++)
    {
        if(p->link==NULL)
            printf("There are less elements!!");
        p=p->link;
    }
    temp->link=p->link;
    p->link=temp;
}
void delete_at_beg(void)
{
    struct node *p;
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        p=start;
        start=start->link;
        printf("Deleted element is %d",p->data);
        free(p);
    }
}
void delete_at_end(void)
{
  struct node* temp,*p;
  if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        p=start;
        while(p->link->link!=NULL)
        p=p->link;

        temp=p->link;
        p->link=NULL;
        printf("Deleted element is %d",temp->data);
        free(temp);
    }
}
void delete_at_posi(void)
{
    int pos,i;
    struct node* temp,*p;
    if(start==NULL)
    {
        printf("List is empty!!");
    }

    printf("Enter position to delete:");
    scanf("%d",&pos);

    p=start;
    for(i=1;i<pos-1;i++)
    {
        if(p->link==NULL)
        {
            printf("There are less elements!!");
        }
        p=p->link;
    }

    temp=p->link;
    p->link=temp->link;
    printf("Deleted element is %d",temp->data);
    free(temp);
}
