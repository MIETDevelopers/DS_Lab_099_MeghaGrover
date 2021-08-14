#include<stdio.h>  // Pre-Processive to include standard input and output funtion header files.
#include<stdlib.h>   // Pre-Processive to include standard Libraray funtion header files.

struct node   //Node creation

{  
    int data;           //Data of the node
    struct node *next;  //Address of the next node
};  
struct node *head;  
void Insert ();   // Funtion Prototype 
void Display();   // Funtion Prototype
void main ()  
{  
    int choice; 
    while(1)   
    {  
        printf("\nMain menu");     
        printf("\n1.Insert ");
        printf("\n2.Display ");
        printf("\n3.Exit From Program"); 
        printf("\nEnter your choice\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
              Insert(); 
            break;  
            case 2:  
              Display();        
            break;  
            case 3:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
void Insert()
{  
    struct node *ptr;   
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  // allocate memory using malloc()
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        (*ptr).data = item;     
        (*ptr).next = head;   
        head = ptr;  
        printf("\n Node Succesfully inserted\n");
        printf("\n%d is added In List",item)  ;
    }  
      
}  
void Display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nList of elements . . . \n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}
