#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};

int main()
{
    node *PTR,*START,*next;
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

    PTR = START->link;
    while(PTR != START)
    {
        printf("\n\n%d\n",PTR->info);
        PTR = PTR->link;
    }

    return 0;
}
