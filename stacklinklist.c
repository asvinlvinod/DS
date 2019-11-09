#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
struct node   
{  
int data;  
struct node *link;  
};  
struct node *start;  
main ()  
{  
    int ch;   
    printf("\nStack Using Linked List\n");
    printf("\n\nMenu\n");  
    while(ch != 4)  
    { 
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");
                break;   
            }  
            default:  
            {  
                printf("Please Enter dataid choice ");  
            }   
    };  
}  
}  
void push ()  
{  
    int data;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("Empty :(");   
    }  
    else   
    {  
        printf("Enter the Element:");  
        scanf("%d",&data);  
        if(start==NULL)  
        {         
            ptr->data = data;  
            ptr -> link = NULL;  
            start=ptr;  
        }   
        else   
        {  
            ptr->data = data;  
            ptr->link = start;  
            start=ptr;  
               
        } 
    }  
} 
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (start == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = start->data;  
        ptr = start;  
        start = start->link;  
        free(ptr);
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=start;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\t",ptr->data);  
            ptr = ptr->link;  
        }  
    }  
}
