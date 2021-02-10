#include<stdio.h>
int main()
{
    int DATA[100],N,LOC,MAX,K;

    printf("Enter the number of element: ");
    scanf("%d",&N);

    printf("Enter the array: ");
    for(int i=1;i<=N;i++)
        scanf("%d",&DATA[i]);

    K = 1, LOC = 1, MAX = DATA[1];      //Initialaize.

    step:
    K = K + 1;                          //Increment counter.

    if(K > N)                           //Test counter.
    {
        printf("\nLargest element %d at location: %d\n",MAX,LOC);
        return 0;
    }

    if(MAX < DATA[K])
    {
        LOC = K;
        MAX = DATA[K];
    }

    goto step;

    return 0;
}
