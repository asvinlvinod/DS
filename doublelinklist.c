#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *llink;  
    struct node *rlink;  
    int data;  
};  
struct node *start;  
void insert_beg();  
void insert_end();  
void insert_pos();  
void del_beg();  
void del_end();  
void del_pos();  
void display();   
main ()  
{  
int ch =0;  
    while(ch != 9)  
    {
        printf("\nDouble Linked List Operations : \n\n"); 
        printf("\n1.Insert at begining\n2.Insert at End\n3.Insert at a Position\n4.Delete from Beginning\n 5.Delete from End\n6.Delete the node after Data\n7.Display\n8.Exit\n");  
        printf("\nEnter your choice:\n");  
        scanf("\n%d",&ch);  
        switch(ch)  
        {  
            case 1:  
            insert_beg();  
            break;  
            case 2:  
            insert_end();  
            break;  
            case 3:  
            insert_pos();  
            break;  
            case 4:  
            del_beg();  
            break;  
            case 5:  
            del_end();  
            break;  
            case 6:  
            del_pos();  
            break;    
            case 7:  
            display();  
            break;  
            case 8:  
            exit(0);  
            break;  
            default:  
            printf("Invalid choice\n");  
        }  
    }  
}  
void insert_beg()  
{  
   struct node *ptr;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {
       printf("\n List OverFlow\n");  
   }  
   else  
   {  
    printf("\nEnter Element:");  
    scanf("%d",&item);  
      
   if(start==NULL)  
   {  
       ptr->rlink = NULL;  
       ptr->llink=NULL;  
       ptr->data=item;  
       start=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->llink=NULL;  
       ptr->rlink = start;  
       start->llink=ptr;  
       start=ptr;  
   }
}    
}  
void insert_end()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter Element:");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(start == NULL)  
       {  
           ptr->rlink = NULL;  
           ptr->llink = NULL;  
           start = ptr;  
       }  
       else  
       {  
          temp = start;  
          while(temp->rlink!=NULL)  
          {  
              temp = temp->rlink;  
          }  
          temp->rlink = ptr;  
          ptr ->llink=temp;  
          ptr->rlink = NULL;  
          }  
             
       }
    }  
void insert_pos()  
{  
   struct node *ptr,*temp;  
   int item,loc,i;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n OVERFLOW");  
   }  
   else  
   {  
       temp=start;  
       printf("Enter the location");  
       scanf("%d",&loc);  
       for(i=0;i<loc;i++)  
       {  
           temp = temp->rlink;  
           if(temp == NULL)  
           {  
               printf("\n There are less than %d elements", loc);  
               return;  
           }  
       }  
       printf("Enter Element:");  
       scanf("%d",&item);  
       ptr->data = item;  
       ptr->rlink = temp->rlink;  
       ptr -> llink = temp;  
       temp->rlink = ptr;  
       temp->rlink->llink=ptr;
   }  
}  
void del_beg()  
{  
    struct node *ptr;  
    if(start == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(start->rlink == NULL)  
    {  
        start = NULL;   
        free(start);  
    }  
    else  
    {  
        ptr = start;  
        start = start -> rlink;  
        start -> llink = NULL;  
        free(ptr); 
    }  
  
}  
void del_end()  
{  
    struct node *ptr;  
    if(start == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(start->rlink == NULL)  
    {  
        start = NULL;   
        free(start);   
    }  
    else   
    {  
        ptr = start;   
        if(ptr->rlink != NULL)  
        {  
            ptr = ptr -> rlink;   
        }  
        ptr -> llink -> rlink = NULL;   
        free(ptr);  
    }  
}  
void del_pos()  
{  
    struct node *ptr, *temp;  
    int val;  
    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d", &val);  
    ptr = start;  
    while(ptr -> data != val)  
    ptr = ptr -> rlink;  
    if(ptr -> rlink == NULL)  
    {  
        printf("\nDeletion not Possible <3\n");  
    }  
    else if(ptr -> rlink -> rlink == NULL)  
    {  
        ptr ->rlink = NULL;  
    }  
    else  
    {   
        temp = ptr -> rlink;  
        ptr -> rlink = temp -> rlink;  
        temp -> rlink -> llink = ptr;  
        free(temp);  
    }     
}  
void display()  
{  
    struct node *ptr;  
    ptr = start;  
    while(ptr != NULL)  
    {  
        printf("%d\n",ptr->data);  
        ptr=ptr->rlink;  
    }
    printf("\n----------------------------------------------------------------\n\n");
}
