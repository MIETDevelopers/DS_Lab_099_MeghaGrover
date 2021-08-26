#include<stdio.h>   
#include<stdlib.h>

struct raghunathbazar
{
    char shop_name[20];
    char item[20];
    float rate;
    struct raghunathbazar *next;
} *start=NULL;
void create_shoplist(char[],char[],float);
void traverse();
void cheapest_shopname();
int main()
{
    int ch,n,i;
    char na[20],it[20];
    float f;
   do
     {
         printf("MainMenu");
         printf("\n1 : Create shoplist");
         printf("\n2 : Traverse");
         printf("\n3 : Cheapest shopnamme");
         printf("\nEnter choice:");
         scanf("%d",&ch);
         switch(ch)
    {
        case 1: printf("Enter no.of shops");
                scanf("%d,&n");
                for(i=1;i<=n;i++)
                {
                    printf("Enter shopname, item & rate");
                    scanf("%s %s %f",&na,&it,&f);
                    create_shoplist(na,it,f);
                }
                break;
        case 2: traverse();
                break;
        case 3: cheapest_shopname();
                break;
    } 
     }
    while(ch!=4);
    return 0;
}
void create_shoplist(char name[],char itm[],float r)
{
    struct raghunathbazar *tmp,*q;
    tmp=(struct raghunathbazar *) malloc(sizeof(struct raghunathbazar *));  
    strcpy(tmp->shop_name,name);
    strcpy(tmp->item,itm);
    tmp->rate=r;
    tmp->next=NULL;
    if(start==NULL)
    start=tmp;
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=tmp;
    }
    void traverse()
    {
        int c=0;
        struct raghunathbazar *q;
        q=start;
        if(q==NULL)
        printf("list empty");
        else
        {
            while(q!=NULL)
            {
                c=c+1;
                printf("%s%s%f",q->shop_name,q->item,q->rate);
                q=q->next;
            }
            printf("total shops=%d",c);
        }

    }
    void cheapest_shopname()
    {
        struct raghunathbazar *q,*y;
        int rt=0;
        q=start;
        if(q==NULL)
        {
            printf("list empty");
        }
        else
        {
            rt=q->rate;
            q=q->next;
            while(q!=NULL)
            {
                if(q->rate<rt)
                {
                    rt=q->rate;
                    y=q;
                }
                q=q->next;
            }
            printf("cheapest shop is %s",y->shop_name);
            printf("cheapest rate is %f",y->rt);
        }
    }
}
}