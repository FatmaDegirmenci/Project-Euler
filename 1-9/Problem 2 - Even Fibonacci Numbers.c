#include <stdio.h>

int main()
{
    int fibonacci[99];
    int i, sum = 0;

    fibonacci[0] = 1;
    fibonacci[1] = 2;

    i = 0;

    while(fibonacci[i]<4000000)
    {
        fibonacci[i+2] = fibonacci[i+1] + fibonacci[i];
        i++;

        if(fibonacci[i]%2==0)
        {
            sum += fibonacci[i];
        }
    }

    printf("\n\ti = %d and sum of even fibonacci numbers = %d ", i, sum);

    return 0;
}
