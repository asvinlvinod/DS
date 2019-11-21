#include<stdio.h>
#include<conio.h>
void main()
{
inti,j,temp,b[10],c[10],arr,n,ch,a;

printf("\t\t FIRST FIT, BEST FIT, WORST FIT\n");
printf("Enter the size of no. of blocks:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the size of %d block:",i);
scanf("%d",&b[i]);
c[i]=b[i];
}
printf("\nEnter the size of Arriving block:");
scanf("%d",&arr);
printf("\n1.First fit\n2.Best fit\n3.Worst fit\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
            for(i=1;i<=n;i++)
            {
            if(b[i]>=arr)
            {
            printf("Arriving block is allocated to %d block.",i);
            break;
            }
            else
            continue;
            }
            break;
case 2:
            for(i=1;i<=n;i++)
            {
            for(j=1;j<n-i;j++)
            {
            if(b[i]>=b[i+1])
            {
            temp=b[i];
            b[i]=b[i+1];
            b[i+1]=temp;
            }
            }
            }
            for(i=1;i<=n;i++)
            {
            if(b[i]>=arr)
            {
            a=b[i];
            break;
            }
            else
            continue;
            }
            for(i=1;i<=n;i++)
            {
            if(c[i]==a)
            {
            printf("Arriving block is allocated to %d block.",i);
            }
            }
            break;
case 3:
            for(i=1;i<=n;i++)
            {
            for(j=1;j<n;j++)
            {
            if(b[i]>=b[i+1])
            {
            temp=b[i];
            b[i]=b[i+1];
            b[i+1]=temp;
            }
            }
            }
            for(i=1;i<=n;i++)
            printf(" %d",b[i]);
            break;
default:
            printf("Enter the valid choice:");
            }
}
