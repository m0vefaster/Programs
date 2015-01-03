#include <stdio.h>
 
int main()
{
    int t,a, i;
    unsigned int n, cnt;
    scanf( "%d", &t ); /*Get the number of test cases*/
    while( t-- )
    {
        a=12;
        i=0;
        cnt=0;
        scanf("%d", &n ); /*Get the n*/
        cnt = n / 2048;
        n = n % 2048;
        while(n && a)
        {
            if( ( n & 0x00000001 ) == 1 )
            {
                cnt++;
            }
            n = n>>1;
            a--;
        }
        printf("%d\n",cnt+i);
    }
    return 0;
}
