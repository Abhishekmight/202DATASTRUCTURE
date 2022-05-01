#include<stdio.h>
typedef struct stack{
int info;
struct stack  *next;

}node;
// Function decleration
node* push(node *);
node* pop (node *);
void display(node *);
// main Function...
int main()
{
int ch;
node *top=NULL;
do{
    printf("\n ==========menu========== \n1. Push \n2. Pop\n3. Display");
    printf("Enter your choice\n");
    scanmf("%d",&ch);
    switch (ch){
case 1:
    top =push (top);
    display (top);
    break;
case 2:
    if (top== NUll);
    printf("stack is empty\n ");
    else {
        top = pop(top);
        break;
    }

    }
    casde 3:

        if top== NULL;
        printf("stack is empty");
        else
        {
            display (top);

        }
        while(ch<=3);

}
}
// Function for push operation
node *push(nodetype *top){
    node *ptr=NULL;
    ptr
}


