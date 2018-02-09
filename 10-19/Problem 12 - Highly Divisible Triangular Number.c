#include <stdio.h>

void triangularNumber();

int main()
{
    triangularNumber();
    return 0;
}

void triangularNumber()
{
    long long int i=1,j;
    long long int number = 0;
    int counter=0;

    while(counter<250)
    {
        number += i;
        for(j=1;j<=sqrt(number);j++)
        {
            if(number%j == 0)
            {
                counter++ ;
            }
        }

        if(counter>=250)
            {
                printf("\n\tnumber : %lld , counter: %d\n",number,counter*2);
                exit(1);
            }

        i++;
        counter = 0;
        
    }
}
