#include<stdio.h>

long long FACTORIAL(int FACT, long long N)
{
    if(N == 0)
        return FACT;
    else
    {
        FACT = FACT*N;
        return FACTORIAL(FACT,N-1);
    }
}

int main()
{
    int N,FACT = 1;
    printf("Enter the number: ");
    scanf("%d",&N);
    printf("%lld\n",FACTORIAL(FACT,N));
    return 0;
}
