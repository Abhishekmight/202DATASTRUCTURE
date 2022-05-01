#include<stdio.h>
#include<stdlib.h>

typedef struct node{
 int info;
 struct  node *next;

 }node;
 int main()
 {
     int x,ch;
     node *ptr=NULL, *left=NULL;
     while(1)
     {
         printf("enter an element\n ");
         scanf("%d",&x);
         ptr=(node*)malloc(sizeof(node));
         ptr->info=x;
         ptr->next=left;
         left=ptr;
         printf("do you want to continue press 1 or 0\n");
         scanf("%d",&ch);
         if(ch==0)
         break;
         }
     printf("Link List\n");
     int count=0;
     while(left!=NULL)
     {
         count++;
         {


         printf("%d",left->info);
         left=left->next;
         {
             printf("count=%d\n",count);
         }
     }

 }
 }
