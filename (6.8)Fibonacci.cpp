#include<stdio.h>

int FIBONACCI(int N)
{
    if(N == 0)
        return 0;
    else if(N == 2 || N == 1)
        return 1;
    else
        return FIBONACCI(N-1) + FIBONACCI(N-2);
}

int main()
{
    int N;

    printf("Enter the number: ");
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    printf("%d ",FIBONACCI(i));

    return 0;
}
