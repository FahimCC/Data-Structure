#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *PTR,*START,*next,*LOC = NULL;
    START = (node*)malloc(sizeof(node));
    PTR = START;

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
    printf("Enter the Search item: ");
    scanf("%d",&ITEM);
    while(PTR->info != ITEM && PTR != START)
    {
        PTR = PTR->link;
    }

    if(PTR->info == ITEM)
    {
         LOC = PTR;
         printf("Data found at position: %d\n",LOC);
    }

    else
    {
        LOC = NULL;
        printf("Data not found.\n");
    }

    return 0;
}
