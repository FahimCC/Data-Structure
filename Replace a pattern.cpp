#include<stdio.h>
#include<string.h>
int INDEX(char T[],char P[])
{
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
        return index;
        step:
        k = k + 1;

    }
    index = 0;
    return index;
}

void REPLACE(char T[],char P[],char Q[])
{
    int j=0,s,i,k,r;
    char s1[1000],s2[1000];
    s = strlen(T);
    k = INDEX(T,P);
    r = strlen(P);

    for(i=0;i<k-1;i++)
    {
        s1[i] = T[i];
    }
    s1[i]='\0';

    for(i=k+r-1;i<s;i++)
    {
        s2[j] = T[i];
        j++;
    }
    s2[j]='\0';

    strcpy(T,s1);
    strcat(T,Q);
    strcat(T,s2);

}
int main()
{
    char T[100],P[100],Q[100];
    printf("Enter the Text: ");
    gets(T);
    printf("\nEnter the replaced pattern: ");
    gets(P);
    printf("\nEnter the pattern: ");
    gets(Q);
    int K = INDEX(T,P);

    while(K!=0)
    {
        REPLACE(T,P,Q);
        K = INDEX(T,P);
    }

    printf("\n");
    puts(T);
    printf("\n");

    return 0;
}
