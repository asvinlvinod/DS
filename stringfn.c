#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ARRAY_SIZE 15
int leng(char *ipstr)
{
    int i=0,length=0;
    for(i=0;ipstr[i]!='\0';i++)
    {
       length++;
    }    
    return length;
}
char *concat(char *str1,char *str2)
{
     int leng1=0,leng2=0,i=0,j=0;
     leng1=leng(str1);
     leng2=leng(str2);
     for(i=leng1;str2[j]!='\0';i++,j++)
     {
         str1[i]=str2[j];
     }
     str1[i]='\0';
     return str1;
}
int compare(char *str1,char *str2)
{
     int leng1=0,leng2=0,i=0,count=0;
     leng1=leng(str1);
     leng2=leng(str2);
     if(leng1==leng2)
     {
         for(i=0;i<leng1;i++)
         {
             if(str1[i]!=str2[i])
             {
                 return -1; 
             }
             else
             {
                 count++;
             }
         }
         if(count==leng1)
         {
             return 0;
         }
     }
     else
     {
         return leng1-leng2;
     }
}
char *reverse(char *str1)
{
    int leng1=0,i=0,j=0,midleng;
    char temp;
    leng1=leng(str1);
    j=leng1-1;
    midleng=leng1/2;
    for(i=0;i<midleng;i++)
    {
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        j=j-1;
    }
    return str1;
}
int main()
{
    char str1[ARRAY_SIZE],str2[ARRAY_SIZE],*resultstr;
    int length=0,i=0,choice=0,result=-99;
    printf("\n\n\tChoose the operation you need to perform...");
    printf("\n\n\t1.StringLength\n\t2.StringReverse\n\t3.StringConcatenation\n\t4.StringCompare\n\n\tYour Choice(in numbers) : ");
    scanf("%d",&choice);
    switch(choice)
    {
                  case 1:
                       printf("\n\n\tEnter the input string\n\n\t");
                       scanf("%s",&str1);
                       length=leng(str1);
                       printf("\n\n\t The length of the string is %d",length);
                       break;
                  case 2:
                       printf("\n\n\tEnter the input string\n\n\t");
                       scanf("%s",&str1);
                       resultstr=reverse(str1);
                       printf("\n\n\t The reversed string is %s",resultstr);
                       break;
                  case 3:
                       printf("\n\n\tEnter two input strings\n\n\t");
                       scanf("%s %s",&str1,&str2);
                       resultstr=concat(str1,str2);
                       printf("\n\n\t The concatenated string is %s",resultstr);
                       break;
                  case 4:
                       printf("\n\n\tEnter two input strings\n\n\t");
                       scanf("%s %s",&str1,&str2);
                       result=compare(str1,str2);
                       printf("\n\n\t The result is %d",result);
                       break;
    }
}