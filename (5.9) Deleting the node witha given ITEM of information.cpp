#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *AVAIL,*LOC = NULL,*LOCP=NULL,*START=NULL,*PTR,*SAVE;

    AVAIL = (node*)malloc(sizeof(node));

    START = AVAIL;
    PTR = AVAIL;

    printf("Enter Numbers to insert in Linked List, 0 to stop: \n");

    while(1)
    {
        scanf("%d",&PTR->info);
        if(PTR->info == 0)
            break;
        printf("%d Stored at: %d\n",PTR->info,PTR);
        node *next = (node*)malloc(sizeof(node));

        next->link = NULL;
        PTR->link = next;
        PTR = next;
    }

    int ITEM;
    printf("Enter the Delete item: ");
    scanf("%d",&ITEM);

    if(START == NULL)           ///list empty
    {
        LOC = NULL;
        LOCP = NULL;
        return 0;
    }

    if(START->info == ITEM)     ///ITEM in first node
    {
        LOC = START;
        LOCP = NULL;
        //return 0;
    }

    SAVE = START;
    PTR = START->link;          ///initialize pointer

    while(PTR != NULL)
    {
        if(PTR->info == ITEM)
        {
            LOC = PTR;
            LOCP = SAVE;
            break;
        }
        SAVE = PTR;
        PTR = PTR->link;        ///update pointer
    }

    //LOC = NULL;

    if(LOC == NULL)
    {
        printf("ITEM not in list.\n");
        return 0;
    }

    if(LOCP == NULL)
    {
        START = START->link;          ///delete first node
    }
    else
    {
        LOCP->link = LOC->link;
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
