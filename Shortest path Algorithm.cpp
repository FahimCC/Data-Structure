#include<stdio.h>

int AND(int a,int b)
{
    if(a==1 && b==1)
        return 1;
    else
        return 0;
}

int OR(int a,int b)
{
    if(a==0 && b==0)
        return 0;
    else
        return 1;
}
int main()
{
    int i,j,k;
    int A[10][10],P[10][10];

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            A[i][j]=0;
        }
    }

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Adgacency of Graph G is: \n\n");
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=4;j++)
        {
            printf("%d   ",A[i][j]);
        }
    }

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(A[i][j]==0)
                P[i][j]=0;
            else
                P[i][j]=1;
        }
    }

    for(k=1;k<=4;k++)
    {
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                P[i][j]=OR(AND(P[i][j],P[i][k]),P[k][j]);
            }
        }
    }

    printf("\n\nPath matrix of Graph G is: \n\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf("%d   ",P[i][j]);
        }
        printf("\n");
    }


    return 0;
}
