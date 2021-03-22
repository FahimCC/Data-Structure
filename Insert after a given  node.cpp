#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    node *link;
};

int main()
{
    node *START,*PTR,*LOC = NULL,*AVAIL,*NEW,*SEARCH,*nnn;
    AVAIL=(node *)malloc(sizeof(node));
    START = AVAIL;
    PTR = AVAIL;
    SEARCH = AVAIL;
    printf("Enter Numbers to insert in Linked List, 0 to stop: \n");
    while(1)
    {
        scanf("%d",&PTR->info);
        if(PTR->info == 0)
            break;

        printf("%d Stored at: %d\n",PTR->info,PTR);
        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        PTR->link = next;
        PTR=next;
    }
    printf("\nEnter ITEM to insert: ");
    int ITEM,key;
    scanf("%d",&ITEM);
    printf("\nEnter the key: ");
    scanf("%d",&key);
    NEW = (node* )malloc(sizeof(node));
    while(SEARCH != NULL)
    {
        if(key == SEARCH->info)
        {
            LOC = SEARCH;
           //  nnn = LOC->link;
            break;
        }
        SEARCH = SEARCH->link;
    }

    NEW->info = ITEM;
    NEW->link = NULL;
    if(LOC == NULL)
    {
        NEW->link = START;
        START = NEW;
    }
    else
    {
        NEW->link = LOC->link;
        LOC->link = NEW;
    }
    while(START != NULL)
    {
       if(START->info==0)
            break;
        printf("INFO= %d\n",START->info);
        START = START->link;
    }
    return 0;
}
