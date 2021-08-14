#include<stdio.h>
#include<conio.h>
#define max 8
int cqueue[max];
int front=-1;
int rear=-1;
int main()
{
int ch,val;
do
{
    printf("Main Menu");
    printf("\n1 Insert");
    printf("\n2 Delete");
    printf("\n3 Display");
    printf("\n4 Exit");
    printf("\n Entre your choice");
    scanf("%d",&ch);
    switch(ch)
        {
Case 1:     if((front==0 && rear==max-1)||(front==rear+1) )   
                    printf("queue is full")
            else if (front==-1)
                  {
                     front=0;
                     rear=0;
                  }        
            else if (rear=max-1)
                     rear=0;
            else
                    rear=rear+1;
            printf("Entre value to be inserted");
            scanf("%d",&val);
                cqueue[rear]=val;    
                break; 
        }
Case 2:                   
            if(front==-1)
            printf("queue is empty");
            else
            {
                printf("deleted element=%d",cqueue[front]);
                  if(front==rear)
                  {
                      front=-1;
                      rear=-1;
                  }
                  else if (front==max-1)
                      front=0;
                  else
                      front=front+1;
                  break;        
            }
}           
}