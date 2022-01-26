#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, sum=0;

    a=1;

    while(a<=100)
    {
        if(a%2!=0)
        {
            sum=sum+a;
        }
        a++;
    }
    printf("1+3+5+7+..........+99 = %d",sum);


    getch();
    return 0;
}
