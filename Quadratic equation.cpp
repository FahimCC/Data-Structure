#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, D, X, X1, X2;
    printf("Enter the A B C: ");
    scanf("%lf%lf%lf",&A,&B,&C);

    D = B*B - 4*A*C;

    if(D > 0)
    {
        X1 = (- B + sqrt(D))/2 * A;
        X2 = (- B - sqrt(D))/2 * A;
        printf("X1 = lf\nX2 = lf\n",X1,X2);
    }
    else if(D == 0)
    {
        X = -B / 2 * A;
        printf("UNIQUE SOLUTION, lf\n",X);
    }
    else
    {
        printf("NO REAL SOLUTION>\n");
    }

    return 0;
}
