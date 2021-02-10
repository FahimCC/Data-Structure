#include<stdio.h>
int main()
{
    int i,j,N,flag=1;
    scanf("%d",&N);

    for(i=2;i<=N;i++)
    {
        flag = 1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=2;
                break;
            }
        }
        if(flag == 1)
        {
            printf("\n%d",i);
        }
    }

    return 0;
}
