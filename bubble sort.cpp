#include<stdio.h>
int main()
{
    int DATA[100],k,PTR,n,i;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the number: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&DATA[i]);
    }
    for(k=1;k<=n-1;k++)
    {
        PTR=1;
        while(PTR<=n-k)
        {
            if(DATA[PTR]>DATA[PTR + 1])
            {
                int temp =DATA[PTR];
                    DATA[PTR]=DATA[PTR+1];
                    DATA[PTR+1]=temp;
            }
            PTR++;
        }
    }
    for(k=1;k<=n;k++)
        printf("%d ",DATA[k]);
    return 0;
}
