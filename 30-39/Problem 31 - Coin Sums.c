#include <stdio.h>

int main()
{
    int number = 200, counter = 0;
    int a,b,c,d,e,f,g,h;

    for(a=0; a<201; a++)
        for(b=0; b<101; b++)
            for(c=0; c<41; c++)
                for(d=0; d<21; d++)
                    for(e=0; e<11; e++)
                        for(f=0; f<5; f++)
                            for(g=0; g<3; g++)
                                for(h=0;h<2;h++)
                                    if((a*1+b*2+c*5+d*10+e*20+f*50+g*100+h*200) == number)
                                        counter++;

    printf("%d",counter);

    return 0;
}
