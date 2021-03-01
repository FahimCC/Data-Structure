#include<stdio.h>
int main()
{
    int j,i,la[1000],n,k,item;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    printf("Enter the number: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&la[i]);
    }

    printf("Enter the insert position: ");
    scanf("%d",&k);

    printf("Enter the insert item: ");
    scanf("%d",&item);

    for(j = n;j>=k;j--)
    {
        la[j+1]=la[j];
    }
    la[k]=item;
    n++;

    for(i=1;i<=n;i++)
    {
        printf("%d ",la[i]);
    }
    return 0;
}
