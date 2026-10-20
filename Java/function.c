#include<stdio.h>
int Addition( int value1, int value2)
{
    int result = value1 + value2;
    return result;
}

int main()
{
    int no1 = 10;
    int no2 = 11;
    int Ans = 0;

    Ans = Addition(no1,no2);

    printf("Addition is %d\n",Ans);
    return 0;
}