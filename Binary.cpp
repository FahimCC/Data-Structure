#include<stdio.h>
int main()
{
    int BEG,END,MID,ITEM,LOC=NULL,DATA[1000],n,i;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the number: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&DATA[i]);
    }
    printf("Enter the search item: ");
    scanf("%d",&ITEM);
    BEG = 1;
    END = n-1;
    MID = (BEG+END)/2;
    while(BEG<=MID && DATA[MID]!=ITEM)
    {
        if(ITEM < DATA[MID])
        {
            END = MID-1;
        }
        else
        {
            BEG = MID+1;
        }
        MID = (BEG+END)/2;
    }
    if(DATA[MID]==ITEM)
    {
        LOC = MID;
        printf("\n%d Data found ai location: %d\n",ITEM,LOC);
    }
    else
    {
        LOC = NULL;
        printf("%d Data not found.\n",ITEM);
    }



    return 0;
}
