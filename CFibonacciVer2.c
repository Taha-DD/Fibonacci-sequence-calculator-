L6E4
2.
So how is it hanging?

Cool way gang
#include<stdio.h>
#include <stdlib.h>

void Fibonacci ( int n, int *p )
{
    static int ZEE_RO = 0, WUN = 1, i = 2;
    
    *(p + ZEE_RO) = 0;
    *(p + WUN) = 1;
    
    *(p + i++) = *(p + i - 2) + *(p + i - WUN);
    
    if ( --n )
        Fibonacci(n, p);
}

int main()
{
    int n, *arr;
    printf(" enter n: ");
    scanf("%d", &n);
    
    arr = ( int* ) malloc ( (n + 1) * sizeof(int) );
    
    Fibonacci(n, arr);
    
    printf(" here's the Fibonacci's results from 0 till %d:\n", n);
    for ( int *p = arr; p <= arr + n; p++ )
        printf(" U%ld = %d\n", p - arr, *p );
        
    return 0;
}
