#include<stdio.h>
#include<string.h>
int main()
{
    char T[100],P[100];
    printf("Enter the Text: ");
    gets(T);
    printf("\nEnter the Delete pattern: ");
    gets(P);

    int k=1,s=strlen(T),r=strlen(P),maxx = s - r + 1,index,l;
    while(k<=maxx)
    {
        for(l=0;l<r;l++)
        {
            if(P[l] != T[k+l-1])
            {
                goto step;
            }
        }
        index = k;
        printf("%d\n",index);
        return 0;
        step:
        k = k + 1;

    }
    index = 0;
    printf("%d\n",index);
    return 0;
}
