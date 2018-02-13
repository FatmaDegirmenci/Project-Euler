#include <stdio.h>

int main()
{
    int leapYear;
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int counter = 0;
    int sunday = 1; // 1 jan 1900
    int firstSunday[12];

    int i,j,k; //i: month , j: day, k: year

    //FIND THE FIRST SUNDAY OF 1991
    leapYear = isLeapYear(1900);

    if(leapYear==1)
    {
        months[1] = 29;
    }

    for(i=0;i<12;i++)
    {
        for(j=1;j<=months[i];j++)
        {

            if(sunday<=months[i])
            {
                sunday += 7;
            }

            if(sunday>months[i])
            {
                sunday = sunday-months[i];
            }
        }
    }

    printf("\t1901 first sunday is %d \n",sunday);

    for(k=1901;k<2001;k++)
    {
        leapYear = isLeapYear(k);

        if(leapYear==1)
        {
            months[1] = 29;
        }

        for(i=0;i<12;i++)
        {
            for(j=1;j<=months[i];j++)
            {
                if(sunday<=months[i])
                {
                    firstSunday[i] = sunday;
                }

                while(sunday<=months[i])
                {
                    sunday += 7;
                }

                if(sunday>months[i])
                {
                    sunday = sunday-months[i];
                }

                if(j==1 && firstSunday[i]==1)
                {
                    counter++;
                }
            }
        }
    }
    printf("\n\t%d Sundays fell on the first of the month"
           " during the twentieth century\n",counter);

    return 0;
}

int isLeapYear(int year)
{
    if(year%4==0)
    {
        if(year%100 == 0 && year%400!=0)
            return 0;
        else
            return 1;
    }
    else
    {
        return 0;
    }
}
