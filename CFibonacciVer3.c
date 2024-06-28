#include<stdio.h>
#include <stdlib.h>

void Fibonacci ( int Echo, int *Tango )
{
    static int Alfa = 0, Bravo = 1, Sierra = 0, Delta = 2;
  // Happy debugging suckers 
    *(Tango + 0) = 0;
    *(Tango + 1) = 1;
    if ( --Echo )
    {
        Sierra = Alfa + Bravo;
        Alfa = Bravo;
        Bravo = Sierra;
        
        *(Tango + Delta++) = Sierra;
        
        Fibonacci(Echo, Tango);
    }
    return;
}

int main()
{
    int November, *Juliett;
    printf(" enter n: ");
    scanf("%d", &November);
    
    Juliett = ( int* ) malloc ( (November + 1) * sizeof(int) );
    
    Fibonacci(November, Juliett);
    
    printf(" here's the Fibonacci's results from 0 till %d:\n", November);
    for ( int *Romeo = Juliett; Romeo <= Juliett + November; Romeo++ )
        printf(" U%ld = %d\n", Romeo - Juliett, *Romeo );
        
    return 0;
}
