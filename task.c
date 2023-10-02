
#include <locale.h>
#include <stdio.h>
#include <math.h>

double f(double x, double a)
{
    return ( log (x * x + a) / sin(4 * x - a));
}
int main()
{
    double a ;
    printf("a = ");
    scanf("%lf", &a);
    printf("n\t x\t a\t f\n---------------------------------\n");
    int n = 1;
    for (double x=-2; x <= 2; x += 0.4)
    {
        if(sin(4 * x - a) == 0)
          {
            printf("%d\t %g\t %g\t division by zero\n", n, x, a);
          } 
        else if((x * x + a) < 0) {
            printf("%d\t %g\t %g\t beyond log value\n", n, x, a);
        }
        else
            printf("%d\t %g\t %g\t %g\n", n, x, a, f(x,a));
        n++;
    }
}