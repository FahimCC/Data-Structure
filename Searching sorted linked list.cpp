#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *START,*PTR,*LOC = NULL;
    START=(node *)malloc(sizeof(node));
    PTR=START;
    printf("Enter Numbers to insert in Linked List, 0 to stop: \n");
    while(1)
    {
        scanf("%d",&START->info);
        if(START->info == 0)
            break;

        printf("%d Stored at: %d\n",START->info,START);
        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        START->link = next;
        START=next;
    }
    printf("\nEnter ITEM to search: ");
    int ITEM;
    scanf("%d",&ITEM);

    while(PTR != NULL)
    {
        if(ITEM < PTR->info)        //Decending order.
        {
            PTR = PTR->link;
        }
        if(PTR->info == ITEM)
        {
            LOC = PTR;
            break;
        }
        else
        {
            LOC = NULL;
            break;
        }
    }
    if(LOC==NULL)
        printf("Data not found.\n");
    else if(ITEM == 0)
        printf("Data not found.\n");
    else
        printf("\n\n%d Found at %d\n",ITEM, LOC);


    return 0;
}
