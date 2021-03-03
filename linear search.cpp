#include<stdio.h>
int main()
{
    int DATA[100],n,ITEM,LOC=0,i;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the number: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&DATA[i]);
    }

    printf("Enter the number of item: ");
    scanf("%d",&ITEM);
    DATA[n+1]=ITEM;

    while(DATA[LOC]!=ITEM)
    {
        LOC++;
    }
    if(LOC == n + 1)
    {
        LOC=0;
       // printf("%d Data found at position: %d\n",item,loc);
    }
    if(LOC==0)
        printf("%d Data not found.\n");
    else if (LOC==1)
        printf("%d Data found at position: %d\n",ITEM,LOC);


    return 0;
}
