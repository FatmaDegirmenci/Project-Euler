int reverse (int);

#include <stdio.h>

int main()
{
    int i,j;
    int max = 0;
    int maxI = 0;
    int maxJ = 0;

    for(i=999;i>=100;i--)
    {
        for(j=999;j>=100;j--)
        {
            if((i*j)==reverse(i*j))
            {
                if(max<(i*j))
                {
                    max = (i*j);
                    maxI = i ;
                    maxJ = j;
                }
            }
        }
    }

    printf("max = %d   ( %d x %d )", max, maxI, maxJ );

    return 0;
}

int reverse (int number)
{
    int reverseNumber = 0;

    while(number != 0)
    {
        reverseNumber = reverseNumber*10 + number%10;
        number /= 10;
    }

    return reverseNumber;
}
