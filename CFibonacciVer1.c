#include<stdio.h>

int Fibonacci ( int n )
{
    int F0 = 0, F1 = 1, Fn = 0;
    while ( --n )
    {
        Fn = F0 + F1;
        F0 = F1;
        F1 = Fn;
    }    
    return Fn;
}

int main()
{
    int n = 15;
    printf("%d", Fibonacci(n));
    return 0;
}