#include <stdio.h>

int main()
{
    int number = 10;
    int sum = sumOfSquare(number);
    int square = squareOfSum(number);
    int result = differenceBetweenSumAndSquares(sum,square);

    printf("\n\tDifference between the sum of the squares of the "
           "\n\tfirst ten natural numbers and the square of the sum:\n");

    printf("\n\tsum : %d \n\tsquare : %d \n\t"
           "Result : %d\n",sum,square, result);


    number = 100;
    sum = sumOfSquare(number);
    square = squareOfSum(number);
    result = differenceBetweenSumAndSquares(sum,square);

    printf("\n\tDifference between the sum of the squares of the first"
           "\n\t one hundred natural numbers and the square of the sum:\n");

    printf("\n\tsum : %d \n\tsquare : %d \n\t"
           "Result : %d\n",sum, square, result);

    return 0;
}

int sumOfSquare (int number)
{
    int sum = 0;
    int i;

    for(i=0; i<=number; i++)
    {
        sum += (i*i);
    }
    return sum;
}

int squareOfSum(int number)
{
    int sum = 0;
    int square;
    int i;

    for(i=1; i<=number; i++)
    {
        sum += i;
    }

    square = sum*sum;

    return square;
}

int differenceBetweenSumAndSquares (int sum, int square)
{
    return (square - sum);
}
