#include<stdio.h>
int main()
{
    int n ,i, a[1000],minn =0;
    printf("Enter the number of tem: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    minn = a[1];

    for(i=1;i<=n;i++)
    {
        if(a[i] < minn)         /// ">" dile largest print korbe
        {
            minn = a[i];
        }
    }
    printf("%d\n",minn);
    return 0;
}
