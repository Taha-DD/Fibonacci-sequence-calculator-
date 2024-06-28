#include<stdio.h>
#include <stdlib.h>

void Fibonacci ( int n, int *p )
{
    int F0 = 0, F1 = 1, Fn = 0, u = n + 1;
    *(p + 0) = F0;
    *(p + 1) = F1;
    while ( --n )
    {
        Fn = F0 + F1;
        F0 = F1;
        F1 = Fn;
        *(p + u - n) = Fn;
    }    
    return;
}

int main()
{
    int n, *arr;
    printf(" enter n: ");
    scanf("%d", &n);
    arr = ( int* ) malloc ( n * sizeof(int) );
    Fibonacci(n, arr);
    printf(" here's the Fibonacci's results from 0 till %d:\n", n);
    for ( int *p = arr; p <= arr + n; p++ )
        printf(" U%ld = %d\n", p - arr, *p );
    return 0;
}
