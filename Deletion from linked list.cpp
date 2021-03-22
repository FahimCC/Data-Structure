 #include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *AVAIL,*LOC,*LOCP=NULL,*START=NULL,*PTR;

    AVAIL = (node*)malloc(sizeof(node));

    START = AVAIL;
    PTR = AVAIL;
    LOC = AVAIL;

    printf("Enter Numbers to insert in Linked List, 0 to stop: ");

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

    int item;
    printf("Enter the Delete item: ");
    scanf("%d",&item);

    while(LOC != NULL)
    {
        if(LOC->info == item)
        {
            if(LOCP == NULL)
            {
                START = START->link;
            }
            else
            {
                LOCP->link = LOC->link;
            }
            break;
        }
        else
        {
            LOCP = LOC;
            LOC = LOC->link;
        }

    }
    while(START != NULL)
    {
        //if(START->info==0)
          //  break;
        printf("INFO= %d\n",START->info);
        START = START->link;
    }
    return 0;
}
