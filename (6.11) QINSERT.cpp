#include<stdio.h>

void QINSERT(int QUEUE[], int N, int FRONT, int REAR, int ITEM)
{
    if(((FRONT == 1) && (REAR == N)) || (FRONT == REAR + 1))
    {
        //printf("%d %d\n",FRONT,REAR);
        printf("OVERFLOW.\n");
        return;
    }

    if(FRONT == 0)
    {
        FRONT = 1;
        REAR = 1;
    }
    else if(REAR == N)
        REAR = 1;
    else
        REAR = REAR + 1;

    printf("Enter the ITEM: ");
    scanf("%d",&ITEM);

    QUEUE[REAR] = ITEM;

    //printf("%d %d\n",REAR,N);
    for(int i=1;i<=REAR;i++)
        printf("%d ",QUEUE[i]);
}

int main()
{
    int N = 10,ITEM = 0,QUEUE[N] = {0},FRONT = 1,REAR = 0;
    printf("Enter the number of item: ");
    scanf("%d",&REAR);

    printf("Enter the QUEUE: ");
    for(int i=1;i<=REAR;i++)
        scanf("%d",&QUEUE[i]);

    QINSERT(QUEUE,N,FRONT,REAR,ITEM);
    return 0;
}
