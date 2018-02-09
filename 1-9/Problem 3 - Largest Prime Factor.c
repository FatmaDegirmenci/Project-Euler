#include <stdio.h>

int main()
{
    long long int number = 600851475143 ;
    long long int i;

    while(number%2 == 0)
    {
        printf("2   ");
        number /=2;
    }

    for(i=3;i<=sqrt(number);i+=2)
    {
        while(number%i == 0)
        {
            printf("%lld   ", i);
            number /= i;
        }
    }

    if(number>2)
    {
        printf("%lld   ", number);
    }

    return 0;
}
