#include<stdio.h>
 
int a[100],ch,size,top,data
,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	//clrscr();
    top=-1;
    printf("\n Enter the size :");
    scanf("%d",&size);
    printf("\nSTACK USING ARRAY");
    while (ch!=4)
    {
    printf("\n\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
	printf("\n Enter the Choice:");
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
            printf("\n\t Exiting.... ");
            break;
        }
        default:
			printf ("\nInvalid Choice\n)");
    }
	}
}
void push()
{
    if(top>=size-1)
        printf("\nOver flow");
    else
    {
        printf(" Enter a element :");
        scanf("%d",&data);
        top++;
        a[top]=data;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",a[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nStack\n");
        printf("\n_____\n");
        for(i=top; i>=0; i--)
            printf("%d\t",a[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
