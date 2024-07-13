#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int num;
    struct node*next;
}
*start;
void display(struct node*);
struct node *create(struct node*);
int main()
{
    start=(struct node *)malloc(sizeof(struct node));
    start->next=NULL;
    start=create(start);
    display(start);
}
struct  node *create(struct node *start)
{
    int num;
    struct node *c, *n;
    c=start;
    do
    {
        printf("enter no:");
        scanf("%d",&c->num);
        printf("wants more:");
        char ch=getch();
        if(ch=='y')
        {
            n=(struct node *)malloc(sizeof(struct node));
            n->next=NULL;
            c->next=n;
            c=n;
        }
        else{
            break;
        }
    }
while(1);
return(start);
}
void display(struct node *start)
{
    struct node *c;
    c=start;
    printf("\n the list");
    while(c!=NULL)
    {
        printf("%d",c->num);
        c=c->next;
    }
}