#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *cs = "aaba", *ms, q0,q1,q2,q3,*rr=" ";
    int n,k=0;
    printf("%s",cs);
    printf("%20s Enter mother sring = ",rr);
    gets(ms);
    n = strlen(ms);
    printf("\n Stlen = %d\n",n);
    q0:
        printf("\tq0");
        getchar();
        if(ms[k]=='a');
        {
            k = k + 1;
            q1:
                printf("\tq1");
                getchar();
                if(ms[k]=='a')
                {
                    k = k + 1;
                    q2:
                        printf("\tq2");
                        getchar();
                        if(ms[k]=='b')
                        {
                            k = k + 1;
                            q3:
                                printf("\tq3");
                                getchar();
                                if(ms[k]=='a')
                                {
                                    k = k + 1;
                                    printf("\nFound.");
                                    printf("\nIndex = %d",k-4);
                                    getchar();
                                    return 0;
                                }
                                else
                                {
                                    k = k + 1;
                                    if(k>=n)
                                    {
                                        printf("Index = 0");
                                        return 0;
                                    }
                                    goto q0;
                                }
                        }
                        else
                        {
                            k = k + 1;
                            if(k>=n)
                            {
                                printf("Index = 0");
                                return 0;
                            }
                            goto q2;
                        }
                }
                else
                {
                    k = k + 1;
                    if(k>=n)
                    {
                        printf("Index = 0");
                        return 0;
                    }
                    goto q0;
                }
        }
        k = k + 1;
        if(k>=n)
        {
            printf("Index = 0");
            return 0;
        }
        goto q0;

    return 0;
}
