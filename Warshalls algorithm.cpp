#include<stdio.h>
int MIN(int x,int y)
{
    if(x <= y)
        return x;
    else
        return y;
}

int main()
{
    int i,j,k;
    int w[5][5],Q[5][5];

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            w[i][j] = 0;
        }
    }

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            scanf("%d",&w[i][j]);
        }
    }

    printf("Weight Matrix of Graph : \n\n");
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=4;j++)
        {
            printf("%d   ",w[i][j]);
        }
    }

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(w[i][j]==0)
                Q[i][j]=9999;
            else
                Q[i][j] = w[i][j];
        }
    }

    for(k=1;k<=4;k++)
    {
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=4;j++)
            {
                Q[i][j] = MIN(Q[i][j],Q[i][k]+Q[k][j]);
            }
        }
    }

    printf("\n\nMatrix Q contaning shortest paths is: \n\n");
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=4;j++)
        {
            printf("%d   ",Q[i][j]);
        }
    }
    return 0;
}
