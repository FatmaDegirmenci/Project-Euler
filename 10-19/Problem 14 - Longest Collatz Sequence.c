#include <stdio.h>

void CollatzConjecture();

int main()
{
    CollatzConjecture();
    return 0;
}

void CollatzConjecture()
{
    long long int number,maxNumber;
    long long int chain=1, maxChain=0;
    long long int i;

    for(i=1000000;i>1;i--)
    {
        number = i;

        while(number !=1 )
        {
            if(number%2 == 0)
            {
                number = (number/2);
            }
            else
            {
                number = (3*number)+1;
            }
            chain++;
        }

        if(maxChain<=chain)
        {
            maxChain = chain;
            maxNumber = i;
        }

        chain = 1;
    }

    printf("max number: %lld, max chain: %lld",maxNumber, maxChain);

}
