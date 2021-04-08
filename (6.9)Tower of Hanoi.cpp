#include<stdio.h>

void TOWER(int N, char BEG, char AUX, char END)
{
    if(N == 1)
    {
        printf("%c --> %c\n",BEG,END);
        return;
    }
    TOWER(N-1,BEG,END,AUX);
    printf("%c -- > %c\n",BEG,END);

    TOWER(N-1,AUX,BEG,END);
}

int main()
{
    char BEG = 'A', AUX = 'B', END = 'C';
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);

    TOWER(N,BEG,AUX,END);
    return 0;
}
