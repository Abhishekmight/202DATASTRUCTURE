#include<stdio.h>
#include<stdlib.h>
typedef struct list{
int info;
struct list *next;

}node;
int main()
{
    node *l=NULL, *r=NULL,*p=NULL;
    int n;
    printf("enter the size of node\t");
    scanf("%d",&n);
    printf("enter elements \n");
    for(int i=0;i<n;i++)
    {
        p=(node*)malloc(sizeof(node));
         scanf("%d\n",&p->info);
        if(r==NULL && l==NULL)
        {
            l=r=p;

        }
        else
        {
            r->next=p;
            r=p;

        }
        r->next=NULL;
    }
    while(l!=NULL)
    {
        printf("%d\t",l->info);
        l=l->next;
    }



}
