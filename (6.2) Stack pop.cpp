#include<stdio.h>

void push(int stack[],int top,int item)
{
    int i;
    if(top == 0)
    {
         printf("UNDERFLOW.\n");
         return;
    }

    item = stack[top];

    top = top - 1;

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
    int top = n;
    push(stack,top,item);

    return 0;
}
