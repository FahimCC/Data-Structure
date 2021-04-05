#include<stdio.h>

int main()
{
    int K, N;
    long long FACT = 1;
    printf("Enter the number: ");
    scanf("%d",&N);

    for(K=1; K<=N; K++)
    {
        FACT = FACT * K;
    }

    printf("%lld\n",FACT);
    return 0;
}
