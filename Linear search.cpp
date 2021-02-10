#include<stdio.h>
int main()
{
    int K, LOC, N, DATA[1000], ITEM;

    printf("Enter the number of element: ");
    scanf("%d",&N);
    printf("Enter the Array: ");
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&DATA[i]);
    }

    K = 1,LOC = 0;

    printf("Enter the search item: ");
    scanf("%d",&ITEM);

    while(LOC == 0 && K <= N)
    {
        if(ITEM == DATA[K])
        {
            LOC = K;
        }
        K = K + 1;
    }

    if(LOC == 0)
        printf("ITEM is not in the array DATA.\n");
    else
        printf("%d is the location of ITEM.\n",LOC);

    return 0;
}
