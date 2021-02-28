#include<stdio.h>
int main()
{
    int LA[1000],n,j,i,k,item;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the number: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&LA[i]);
    }
    printf("Enter the delete position: ");
    scanf("%d",&k);

    item = LA[k];

    for(j=k;j<=n-1;j++)
    {
        LA[j] = LA[j+1];
    }
    n--;
    for(i=1;i<=n;i++)
    {
        printf("%d ",LA[i]);
    }
    return 0;
}
