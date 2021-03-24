#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *START,*PTR,*LOC = NULL,*AVAIL,*NEW;
    AVAIL=(node *)malloc(sizeof(node));
    START = AVAIL;
    PTR = AVAIL;
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
    printf("\nEnter ITEM to search: ");
    int ITEM;
    scanf("%d",&ITEM);
    //AVAIL = (node*)malloc(sizeof(node));
    NEW = (node* )malloc(sizeof(node));
    if(AVAIL == 0)
    {
        printf("Overflow\n");
        return 0;
    }

   // NEW = AVAIL;
   // AVAIL = AVAIL -> link;
    NEW->info = ITEM;
    NEW->link = START;
    START = NEW;
    while(NEW != NULL)
    {
        if(NEW->info==0)
            break;
        printf("%d \n",NEW->info);
        NEW = NEW->link;
    }

    return 0;
}
