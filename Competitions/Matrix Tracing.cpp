#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
#include <queue>


            
using namespace std;
unsigned long long int MOD = 1000000007 ;
unsigned long long
gcd(unsigned long long x, unsigned long long y)
{
    while (y != 0)
    {
        unsigned long long t = x % y;
        x = y;
        y = t;
    }
    return x;
}

unsigned long long
perm(unsigned long long n, unsigned long long k)
{

    unsigned long long r = 1;
    for (unsigned long long d = 1; d <= k; ++d, --n)
    {
        unsigned long long g = gcd(r, d);
        r /= g;
        unsigned long long t = n / (d / g);

        r *= t;
    }
    return r;
}

int main()
{
	 unsigned  long long int T,m,n;
	
	cin>>T;
	
	while(T>0)
    {
    	 cin>>m>>n;
    	  unsigned  long long int ans= perm(m+n-2,m-1);
		 ans= ans  % MOD ;
    	 cout<<ans<<endl;
    	 T--;
    }	
}
