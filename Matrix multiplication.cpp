#include<stdio.h>

int main()
{
    int a[100][100], b[100][100], gun[100][100] ={0}, x,y,z,i,j,k;

    printf("Enter the A,B,C: ");
    scanf("%d%d%d",&x,&y,&z);

    printf("Enter the 1st matrix: \n");
    for(i=1; i<=x; i++)
    {
        for(j=1; j<=y; j++)
            scanf("%d",&a[i][j]);

            printf("\n");
    }
    printf("\n\n");
    printf("Enter the 2nd matrix: \n");
    for(i=1; i<=z; i++)
    {
        for(j=1; j<=x; j++)
            scanf("%d",&b[i][j]);

            printf("\n");
    }
    printf("\n\n");

    for(i=1; i<=x; i++)//3
    {
        for(j=1; j<=z; j++)//2
        {
            for(k=1; k<=y; k++)//2
            {
                gun[i][j]= gun[i][j] +  (a[j][k] * b[k][j]);
            }
            printf("\n");
        }
    }

    for(i=1; i<=z; i++)
    {
        for(j=1; j<=y; j++)
            printf("%d ",gun[i][j]);

            printf("\n");
    }

    return 0;
}
