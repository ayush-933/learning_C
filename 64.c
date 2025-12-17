#include <stdio.h>
#include <math.h>

#define err 0.0005
#define f(x) (x*x*x - 4*x - 9)

int main()
{
    int i = 1;
    float x0, x1, x2;
    double f0, f1, f2;

    printf("\nEnter the value of x0: ");
    scanf("%f", &x0);

    printf("\nEnter the value of x1: ");
    scanf("%f", &x1);

    printf("\n");
    printf("\nItr\t  X0\t\t X1\t\t X2\t\t f0\t\t f1\t\t f2\n");
    printf("-------------------------------------------------------------------------------\n");

    do
    {
        f0 = f(x0);
        f1 = f(x1);

        x2 = (x0 + x1) / 2;
        f2 = f(x2);

        printf("%d\t %f\t %f\t %f\t %lf\t %lf\t %lf\n", i, x0, x1, x2, f0, f1, f2);

        if ( (f0 * f2) < 0 )
            x1 = x2;
        else
            x0 = x2;

        i++;

    } while (fabs(f2) > err);

    printf("\n-------------------------------------------------------------------------------\n");
    printf("Approximate Root: %f\n\n", x2);

    return 0;
}