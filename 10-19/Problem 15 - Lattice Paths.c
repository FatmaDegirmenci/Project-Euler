#include <stdio.h>

void latticePath();

int main()
{
    latticePath();

    return 0;
}

void latticePath()
{
    int n= 21, i,j;

    long long int matrix[21][21] = {0};

    for(i=0;i<n;i++)
    {
        matrix[i][0] = 1;
        matrix[0][i] = 1;
    }

    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            matrix[i+1][j] = matrix[i][j] + matrix[i+1][j-1];
        }
    }

    printf("\n\n**********************\n\n");
    printf("RESULT : %lld", matrix[20][20]);
    printf("\n\n**********************\n\n");
}
