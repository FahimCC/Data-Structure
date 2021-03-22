#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *LOC = NULL,*LOCP=NULL,*START=NULL,*PTR,*SAVE,*next;

    PTR = (node*)malloc(sizeof(node));

    START = PTR;

    printf("Enter Numbers to insert in Linked List, 0 to stop: \n");

    while(1)
    {
        scanf("%d",&START->info);
        if(START->info == 0)
        {
            next->link = PTR;
            break;
        }

        printf("%d Stored at: %d\n",START->info,START);
        next = (node*)malloc(sizeof(node));

        next->link = NULL;
        START->link = next;
        START = next;
    }

    int ITEM;
    printf("Enter the Delete item: ");
    scanf("%d",&ITEM);

    SAVE = START;
    PTR = START->link;          ///initialize pointer

    while(PTR->info != ITEM && PTR != START)
    {
        SAVE = PTR;
        PTR = PTR->link;        ///update pointer
    }

    if(PTR->info == ITEM)
    {
        LOC = PTR;
        LOCP = SAVE;
    }
    else
    {
        LOC = NULL;
        LOCP = SAVE;
    }

    if(LOC == NULL)
    {
        printf("ITEM not in list.\n");
        return 0;
    }
    LOCP->link = LOC->link;

    PTR = START->link;
    while(PTR != START)
    {
        printf("\n\n%d\n",PTR->info);
        PTR = PTR->link;
    }
    return 0;
}
