#include<stdio.h>
#include <stdlib.h>

void Fibonacci ( int n, int *array )
{
    *array = 0;
    *(array + 1) = 1;
    for ( int *pointer = array + 2; pointer <= array + n; pointer++ )
        *pointer = *(pointer - 1) + *(pointer - 2);
    
}

int main()
{
    int n, *array;
    printf(" enter n: ");
    scanf("%d", &n);
    
    array = ( int* ) malloc ( (n + 1) * sizeof(int) );
    
    Fibonacci(n, array);
    
    printf(" here's the Fibonacci's results from 0 till %d:\n", n);
    for ( int *pointer = array; pointer <= array + n; pointer++ )
        printf(" U%ld = %d\n", pointer - array, *pointer );
        
    return 0;
}
