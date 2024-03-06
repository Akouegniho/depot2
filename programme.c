#include <stdio.h>
#include <stdlib.h>
int premier(int );
int main(void)
{
    int j;
    printf(" Les nombres premiers et  comprises entres 0 et 10000 sont :\n");
    for ( j = 1 ; j <= 10000; j++)
        if ( premier(j) == 0 )
            printf(" %d - ",j);
    return 0;
}
int premier(int n)
    int a;
    a = 0;
    if (n == 1)
        a = 1;
    else
        for( i = 2 ; i <= n/2 ; i++)
            if ( n % i == 0){
                a++;

}


