#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next; 
}
*start=NULL;
void insert(int,int);
void display();
void main()
{
    int val,i,ch,n,pos;
do
    {
        printf("Main Menu");
        printf("\n1 Insert");
        printf("\n2 Display");
        printf("\n3 Exit");
        printf("\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
{
case 1:
        printf("enter info and pos");
        scanf("%d%d",&val,&pos);
        insert(val,pos);
    break;
case 2: 
        display();
    break;
    }
}
while(ch!=3);
getch();
}
void insert(int num,int pos)
{
    int i;
    struct node *tmp,*q;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info=num;
    q=start;
    for(i=1;i<pos;i++)
    {
        if(q==NULL)
        {
            printf("No node present");
        }
        q=q->next;
    }
    tmp->next=q->next;
    q->next=tmp;
}
void display
{
    struct node *tmp;
    tmp=start;
    if(tmp==NULL)
    printf("list empty");
    else
    {
        while(tmp!=NULL)
        {
            printf("%d",tmp->info);
            tmp=tmp->next;
        }
    }
}