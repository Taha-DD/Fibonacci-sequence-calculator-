
#include<stdio.h>

int Fibonacci ( int n )
{
    static int F0 = 0, F1 = 1, Fn = 0;
    if ( --n ) {
        Fn = F0 + F1; F0 = F1; F1 = Fn;
        Fibonacci(n);
    }    
    return Fn;
}

int main()
{
    int n = 44;
    printf("%d", Fibonacci(n));
    return 0;
}