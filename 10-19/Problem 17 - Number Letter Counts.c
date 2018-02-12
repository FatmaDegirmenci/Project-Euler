
#include <stdio.h>
#include <string.h>

int main()
{
    numberLetterCounts();
    return 0;
}

void numberLetterCounts()
{
    int number;
    char a[10][10]={"ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    char b[10][10]={"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN",
                    "SEVENTEEN","EIGHTEEN","NINETEEN"};
    char c[10][10]={"TEN","TWENTY","THIRTY","FORTY","FIFTY","SIXTY","SEVENTY",
                    "EIGHTY","NINETY"};

    int numberLen = 0;
    int x;
    int sum = 0;
    int counter = 1;
    
    while(counter<1000)
    {
        numberLen = 0;
        number = counter;
        if(number<1000)
        {
            if(number>100 && number%100 !=0)
            {
                x = number/100;
                number = number%100;
                numberLen += strlen(a[x-1]);
                numberLen += strlen("hundredand");
            }

            if(number>=100 && number%100==0)
            {
                x = number/100;
                number = number%100;
                numberLen += strlen(a[x-1]);
                numberLen += strlen("hundred");
            }

            if(number == 10)
            {
                numberLen += strlen(c[0]);
            }

            if(number>10 && number<20)
            {
                x = number%10;
                numberLen += strlen(b[x-1]);
            }
    
            if(number>19 && number<100)
            {
                x = number/10;
                number = number%10;
                numberLen += strlen(c[x-1]);
            }

            if(number<10)
            {
                numberLen += strlen(a[number-1]);
            }

            sum += numberLen;
        }

        counter++;
    }

    sum+= strlen("onethousand");

    printf("\nsum : %d",sum);

}
