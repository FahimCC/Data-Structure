#include<stdio.h>
int main()
{
    int DATA[100],N,LOC,MAX,K;

    printf("Enter the number of element: ");
    scanf("%d",&N);

    printf("Enter the array: ");
    for(int i=1;i<=N;i++)
        scanf("%d",&DATA[i]);

    K = 1, LOC = 1, MAX = DATA[1];      //Initialaize.

   while(K <= N)
   {
       if(MAX < DATA[K])
        {
            LOC = K;
            MAX = DATA[K];
        }
        K = K + 1;
   }

    printf("Largest element in the array %d at position: %d",MAX,LOC);

    return 0;
}
