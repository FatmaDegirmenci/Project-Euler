#include <stdio.h>

int main()
{
    primeNumber();

    return 0;
}

int primeNumber()
{
    int i;
    int number = 1;
    int counter = 0;
    int flag = 1;

    while(counter != 10001)
    {
        number++;
        for(i=2;i<number;i++)
        {
            if(number%i==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            counter++;
        }

        flag = 1;

        if(counter == 10001)
        {
            printf("\n\n    10001st prime number is: %d   \n\n",i);
            break;
        }
    }
}
