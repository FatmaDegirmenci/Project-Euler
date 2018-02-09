#include <stdio.h>

void sumPrimes (long int);

int main()
{
    long int number = 2000000;
    sumPrimes(number);

    return 0;
}

void sumPrimes (long int number)
{
    long int i,j;
    long long int sum = 2; // first prime number is 2
    int flag;

    for(i=3; i<number;i+=2)
    {
        flag = 0;
        for(j=3;j*j<=i;j+=2)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            sum += i;
        }
    }
    printf("\n\n  sum: %lld   ", sum);
}
