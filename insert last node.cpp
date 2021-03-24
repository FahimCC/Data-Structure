1#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *START=NULL,*PTR,*LOC = NULL,*AVAIL,*NEW,*SAVE;
    AVAIL=(node *)malloc(sizeof(node));
    START = AVAIL;
    PTR = AVAIL;
    printf("Enter Numbers to insert in Linked List, 0 to stop: \n");
    while(1)
    {
        scanf("%d",&AVAIL->info);
        if(AVAIL->info == 0)
            break;

        printf("%d Stored at: %d\n",AVAIL->info,PTR);
        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        AVAIL->link = next;
        AVAIL=next;
    }
    printf("\nEnter ITEM to insert: ");
    int ITEM,key;
    scanf("%d",&ITEM);

    ///5.6
    if(START == NULL)                   ///List empty.
        LOC = NULL;

    if(ITEM < START->info)                 ///Special case.
    {
        LOC = NULL;
        return 0;
    }

    SAVE = START;
    PTR = START->link;                      ///Initializes pointer

    while(PTR != NULL)
    {
        if(ITEM < PTR->info)
        {
            LOC = SAVE;
            break;
        }
        else
        {
            SAVE = PTR;
            PTR = PTR->link;
        }
    }

    LOC = SAVE;


    ///5.5

    NEW = (node*)malloc(sizeof(node));

    NEW->info = ITEM;

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
        if(START->info == 0)
            goto step;
        printf("INFO= %d\n",START->info);
        step:
        START = START->link;
    }

    return 0;
}
