#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, sum=0;

    a=1;

    while(a<100)
    {
        sum=sum+a;
        a=a+2;
    }

    printf("1+3+5+7+...........+99 = %d",sum);

    getch();
    return 0;
}
