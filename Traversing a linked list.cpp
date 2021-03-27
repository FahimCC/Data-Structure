#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    node *link;
};
int main()
{

    node *START,*PTR;
    START=(node *)malloc(sizeof(node));
    PTR=START;
    printf("Enter Numbers to insert in Linked List, 0 to stop: \n");
    while(1)
    {
        scanf("%d",&START->info);
        if(START->info==0)
            break;

        printf("%d Stored at: %d\n",START->info,START);
        node *next = (node *)malloc(sizeof(node));
        next->link=NULL;
        START->link = next;
        START=next;
    }
    while(PTR !=NULL)
    {
        if(PTR->info == 0)
            break;
            printf("Present Address: %d, info = %d, Next Link = %d\n",PTR, PTR->info,PTR->link);
            PTR = PTR->link;

    }
    return 0;
}
