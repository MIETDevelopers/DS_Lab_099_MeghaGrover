#include<stdio.h>
#define max 5
int main()
{
    int val,i=0,j,ch,a[max];
    do 
    {
        printf("Main menu");
        printf("\n1,Insert");
        printf("\n2,Delete");
        printf("\n3,Display");
        printf("\n4,Exit");
        printf("\n,Entre your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case1: printf("entre value");
                   scanf("%d",&val);
                   if(i==0)
                   {
                       a[i]=val;
                       i++;
                   }
                   else
                   {
                       for(j=i-1;j>=0;j--)
                       {
                           if(val>a[j])
                           a[j+1]=a[j];
                           else
                           break; 
                       }
                   }
                   a[j+1]=val;
                   i++;

            case2: if(i==-1)
            printf("queue is empty");
            else
            {
                i--;
                printf("deleted element=%d",a[i]);
            }
            break;

            case3: if(i==-1)
            printf("queue is empty");
            else
            {
                while(i>=0)
                {
                    i--;
                    printf("d",a[i]);
                }
            }
            break;
        }    
    }
    while(ch!=4);
    return 0;
}