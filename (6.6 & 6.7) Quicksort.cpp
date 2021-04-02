#include<stdio.h>
#include<iostream>
using namespace std;


int QUICK(int A[], int N, int BEG, int END, int LOC)
{
    int LEFT, RIGHT, TEMP;
    LEFT = BEG, RIGHT = END ,LOC = BEG;

    step2:
    while(A[LOC] <= A[RIGHT] && LOC != RIGHT)
    {
        RIGHT = RIGHT + 1;
    }

    if(LOC == RIGHT)
        return LOC;
    if(A[LOC] > A[RIGHT])
    {
        TEMP = A[LOC];
        A[LOC] = A[RIGHT];
        A[RIGHT] = TEMP;
        LOC = RIGHT;
        goto step3;
    }

    step3:
    while(A[LEFT] <= A[LOC] && LEFT != LOC)
    {
        LEFT = LEFT + 1;
    }

    if(LOC == LEFT)
        return LOC;
    if(A[LEFT] > A[LOC])
    {
        TEMP = A[LOC];
        A[LOC] = A[LEFT];
        A[LEFT] = TEMP;
        LOC = LEFT;
        goto step2;
    }
}
int main()
{
    int TOP = 0, N, A[100], LOWER[100], UPPER[100];
    int BEG, END, LOC = 0;

    printf("Enter the number of element: ");
    scanf("%d",&N);

    for(int i=1; i<=N;i++)
    {
        scanf("%d",&A[i]);
    }

    if(N > 1)
    {
        TOP = TOP + 1;
        LOWER[1] = 1;
        UPPER[1] = N;
    }

    cout<<"1"<<endl;
    while(TOP != NULL)
    {
        BEG = LOWER[TOP];
        END = UPPER[TOP];
        TOP = TOP - 1;

        cout<<"1"<<endl;
        QUICK(A,N,BEG,END,LOC);
        cout<<"2"<<endl;

        if(BEG < LOC - 1)
        {
            TOP = TOP + 1;
            LOWER[TOP] = BEG;
            UPPER[TOP] = LOC - 1;
        }

        if(LOC + 1 < END)
        {
            TOP =TOP + 1;
            LOWER[TOP] = LOC + 1;
            UPPER[TOP] = END;
        }
    }

    cout<<"1"<<endl;
    for(int i=1; i<=N;i++)
    {
        printf("%d ",A[i]);
    }

    return 0;
}
