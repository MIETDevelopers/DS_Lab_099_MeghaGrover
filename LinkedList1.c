#include <stdio.h> // Pre-Processive to include standard input and output funtion header files.
#include <stdlib.h>  // Pre-Processive to include standard Libraray funtion header files.

struct node   //Node creation
{  
    int data;   //Data of the node
    struct node *next;     //Address of the next node
};  
struct node *head;  //Global variable

void beginsert ();
void display();
void delete();           // Funtion Prototype
void search();

int main() {
  int option = 0; 

  printf("Singly Linked List Example - All Operations\n");

  while (option < 6)
   {

    printf("\nOptions\n");
    printf("1 : Insert into Linked List(at beginning) \n");
    printf("2 : Delete from Linked List \n");
    printf("3 : Display Linked List\n");
    printf("4 : Search Element\n");
    printf("Others : Exit()\n");
    printf("Enter your option:");
    scanf("%d", &option);
    switch (option) {
      case 1:
        beginsert();                         
        break;
      case 2:
        delete();                                        
        break;
      case 3:
        display();                                          
        break;
      case 4:
        search();
        break;
      default:
        break;
    }
  }

  return 0;
}
void beginsert()  
{  
    struct node *ptr;  //Pointer variable
    int item;           
    ptr = (struct node *) malloc(sizeof(struct node *));   // allocating memory using malloc()
    if(ptr == NULL)  
    {  
        printf("\n No space in RAM");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted");  
    }  
      
}  
void delete() {
  
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  

void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     
              
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }              
}