#include <stdio.h>

int main()
{
    int number, i, j;
    int sumOfDiv[10000] = {0};
    int sum = 0;


    for(i=1;i<10000;i++)
    {
        for(j=1;j<i;j++)
        {
            number = i%j;

            if(number == 0)
            {
                sumOfDiv[i] += j;
            }

            if(sumOfDiv[j] == i && j == sumOfDiv[i])
            {
                sum += i;
                sum += j;
                printf("%d - %d\n", i,j);
            }
        }
    }

    printf("\n SUM : %d",sum);

    return 0;
}
