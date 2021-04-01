#include<stdio.h>

void push(int stack[],int top,int maxstk,int item)
{
    int i;
    if(top==maxstk)
    {
         printf("OVERFLOW.\n");
         return;
    }
    top = top + 1;

    stack[top] = item;
    for(i=1;i<=top;i++)
        printf("%d ",stack[i]);

}

int main()
{
    int n,i,item;
    printf("Enter the number of element: \n");
    scanf("%d",&n);
    int stack[6];
    printf("Enter the number of item: \n");
    for(i=1;i<=n;i++)
        scanf("%d",&stack[i]);
    int maxstk = 6;
    int top = i;
    printf("Enter the New item: \n");
    scanf("%d",&item);
    push(stack,top,maxstk,item);

    return 0;
}
