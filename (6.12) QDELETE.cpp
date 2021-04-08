#include<stdio.h>
#include<conio.h>

void QDELETE(int QUEUE[], int N, int FRONT, int REAR, int ITEM)
{
    if(FRONT == 0)
    {
        printf("UNDERFLOW.\n");
        return;
    }

    ITEM = QUEUE[FRONT];

    if(FRONT == REAR)
    {
        FRONT = 0;
        REAR = 0;
    }
    else if(FRONT == N)
        FRONT = 1;
    else
        FRONT = FRONT + 1;

    printf("%d \n%d",FRONT,REAR);

    for(int i=FRONT;i<=REAR;i++)
        printf("\n%d ",QUEUE[i]);
}

int main()
{
    int N = 10,ITEM = 0,QUEUE[N] = {0},FRONT = 1,REAR = 0;
    printf("Enter the number of item: ");
    scanf("%d",&REAR);

    printf("Enter the QUEUE: ");
    for(int i=1;i<=REAR;i++)
        scanf("%d",&QUEUE[i]);

    QDELETE(QUEUE,N,FRONT,REAR,ITEM);

    return 0;
}
