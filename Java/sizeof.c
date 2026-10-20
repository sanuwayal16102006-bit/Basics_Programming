#include<stdio.h>
int main ()
{
    char ch = 'A';
    int i = 11;
    float no = 3.14;
    double d = 90.23456;

    printf("%d\n",sizeof(ch));  //1
    printf("%d\n",sizeof(i));   //4
    printf("%d\n",sizeof(no));   //4
    printf("%d\n",sizeof(d));    //8

    return 0;   
}