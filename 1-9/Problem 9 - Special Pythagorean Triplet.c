#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float powC= c*c;

    for(a=0;a<1000;a++)
    {
        for(b=1;b<1000;b++)
        {
            powC = pow(a,2) + pow(b,2);
            c = sqrt(powC);

            if(a<b && b<c)
            {
                if((a+b+c) == 1000)
                {
                    printf("\n\ta: %.0f, b: %.0f, c: %.0f\n", a,b,c);
                    printf("\n\tProduct a*b*c = %.0f\n",(a*b*c));
                    break;
                }
            }
        }
    }

    return 0;
}
