#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    node *next;
    node *previous;

};

int main()
{
    node *AVAIL,*LOC = NULL,*LOCP=NULL,*START=NULL,*PTR,*SAVE;

    START = (node*)malloc(sizeof(node));
    PTR = START;

    printf("Enter Numbers to insert in Linked List, 0 to stop: \n");

    while(1)
    {
        scanf("%d",&PTR->info);
        if(PTR->info == 0)
            break;
        printf("%d Stored at: %d\n",PTR->info,PTR);
        node *nn = (node*)malloc(sizeof(node));

        nn->next = NULL;
        PTR->next = nn;
        PTR->previous = NULL;
        nn->previous = PTR;
        PTR = nn;
    }

    while(PTR != NULL)
    {
        printf("INFO= %d\n",PTR->info);
        PTR = PTR->previous;
    }
    return 0;
}
