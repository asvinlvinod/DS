#include<stdio.h>
#include<malloc.h>
struct Node
{
int exp;
int c;
struct Node *link;
}*rh,*ph,*qh,*pptr,*rptr,*qptr,*nptr;
int exp;
int main()
{
int i,p,q,e,cf,f=0;
ph=(struct Node*)malloc(sizeof(struct Node));
qh=(struct Node*)malloc(sizeof(struct Node));
ph->link=NULL;
qh->link=NULL;
pptr=ph;
printf("\nENter the number of terms in P : ");
scanf("%d",&p);
printf("\nEnter the polynomial : ");
for(i=0;i<p;i++)
{nptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nEnter the %d the exp : ",i+1);
scanf("%d",&e);
nptr->exp=e;
printf("\nEnter the %d the coeff : ",i+1);
scanf("%d",&cf);
nptr->c=cf;
nptr->link=NULL;
pptr->link=nptr;
pptr=nptr;}
pptr=ph->link;
printf("\nPolynomial P: ");
do
{printf("%dx^%d",(pptr->c),(pptr->exp));
if(pptr->link!=NULL)
printf("+");
pptr=pptr->link;}while(pptr!=NULL);
printf("\nEnter the number of terms in Q : ");
scanf("%d",&q);
printf("\nEnter the polynomial Q");
for(i=0;i<q;i++)
{nptr=(struct Node*)malloc(sizeof(struct Node));
printf("\nENter the %d exp : ",i+1);
scanf("%d",&e);
nptr->exp=e;
printf("\nEnter the %d coeff : ",i+1);
scanf("%d",&cf);
nptr->c=cf;
nptr->link=NULL;
qptr->link=nptr;
qptr=nptr;}
qptr=qh->link;
printf("\nPolynomial Q : ");
do
{printf("%dx^%d",(qptr->c),(qptr->exp));
if(qptr->link!=NULL)
printf("+");
qptr=qptr->link;
}while(qptr!=NULL);
rh=(struct Node*)malloc(sizeof(struct Node));
rh->link=NULL;
rptr=rh;
pptr=ph->link;
qptr=qh->link;
while(pptr!=NULL&&qptr!=NULL)
{if(pptr->exp==qptr->exp)
{nptr=(struct Node*)malloc(sizeof(struct Node));
rptr->link=nptr;
rptr=nptr;
rptr->c=(pptr->c)+(qptr->c);
rptr->exp=pptr->exp;
rptr->link=NULL;
pptr=pptr->link;
qptr=qptr->link;}
else if(pptr->exp>qptr->exp)
{nptr=(struct Node*)malloc(sizeof(struct Node));
rptr->link=nptr;
rptr=nptr;
rptr->c=pptr->c;
rptr->exp=pptr->exp;
pptr=pptr->link;}
else if(pptr->exp<qptr->exp)
{nptr=(struct Node*)malloc(sizeof(struct Node));
rptr->link=nptr;
rptr=nptr;
rptr->c=qptr->c;
rptr->exp=qptr->exp;
qptr=qptr->link;}}
if(pptr!=NULL&&qptr==NULL)
{nptr=(struct Node*)malloc(sizeof(struct Node));
rptr->link=nptr;
rptr=nptr;
rptr->c=pptr->c;
rptr->exp=pptr->exp;
pptr=pptr->link;}
if(pptr==NULL&&qptr!=NULL)
{nptr=(struct Node*)malloc(sizeof(struct Node));
rptr->link=nptr;
rptr=nptr;
rptr->c=qptr->c;
rptr->exp=qptr->exp;
qptr=qptr->link;}
rptr=rh->link;
printf("\nSum of polynomial : ");
do
{printf("%dx^%d",(rptr->c),(rptr->exp));
if(rptr->link!=NULL)
printf("+");
rptr=rptr->link;
}while(rptr!=NULL);
rptr=rh;
pptr=ph;
while(pptr->link!=NULL)
{qptr=qh->link;
pptr=pptr->link;
while(qptr!=NULL)
{e=(pptr->exp)+(qptr->exp);
cf=(pptr->c)*(qptr->c);
if(rptr->link==NULL)
{nptr=(struct Node*)malloc(sizeof(struct Node));
nptr=(struct Node*)malloc(sizeof(struct Node));
nptr->c=cf;
nptr->exp=e;
rptr->link=nptr;
nptr->link=NULL;
qptr=qptr->link;
rptr=rh;}
else
rptr=rptr->link;
if(rptr->exp=exp)
{rptr->c=rptr->c+cf;
qptr=qptr->link;
rptr=rh;}}}
rh->link=NULL;
rptr=rh;
pptr=ph;
while(pptr->link!=NULL)
{qptr=qh->link;
pptr=pptr->link;
while(qptr!=NULL)
{e=(pptr->exp)+(qptr->exp);
cf=(pptr->c)*(qptr->c);
if(rptr->link=NULL)
{nptr=(struct Node*)malloc(sizeof(struct Node));
nptr->c=cf;
nptr->exp=e;
rptr->link=NULL;
qptr=qptr->link;
rptr=rh;}
else
rptr=rptr->link;
if(rptr->exp==e)
{rptr->c=rptr->c+cf;
qptr=qptr->link;
rptr=rh;}}}
rptr=rh->link;
printf("\nPolynomial Mult : ");
do
{printf("%dx^%d",(rptr->c),(rptr->exp));
if(rptr->link!=NULL)
printf("+");
rptr=rptr->link;
}while(rptr!=NULL);
}
