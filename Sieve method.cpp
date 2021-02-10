#include<stdio.h>
#include<math.h>
int A[1000];
void CROSSOUT(int N,int K)
{
    int L;
    if(A[K]==1)
        return;

    for(L=2*K;L<=N;L=L+K)
        A[L] = 1;

    return;
}
int main()
{
    int K,N;
    scanf("%d",&N);

    A[0]=-1;
    for(K=1;K<=N;K++)
        A[K] = K;

    for(K=2;K<=sqrt(N);K++)
        CROSSOUT(N,K);

    for(K=2;K<=N;K++)
        if(A[K]!=1)
            printf("%d ",A[K]);
    return 0;
}
