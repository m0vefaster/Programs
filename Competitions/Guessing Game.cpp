#include<iostream>
//#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string>
#include<vector>
#include<map>
#include <utility>
#include <time.h> 
#include<limits>
#include<queue>
#include<stack>
#include<cstdio>
#include<list>
using namespace std;

#define gc getchar

void scanint(  int &x)
{
    register  int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

long long int gcd(long long int m, long long int n)
{

    long long int r;

    //cout<<"\n m and n are:"<<m<<" "<<n<<endl;
    
    /* Check For Proper Input */
    if((m == 0) || (n == 0))
        return 1;
    else if((m < 0) || (n < 0))
        return 1 ;

    do
    {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    while(true);

   ///cout<<"\nreturning:"<<n<<endl;
    return n;
}

int main()
{

long long int T,i,j;
long long int N, M;
cin>>T;

while(T--)
{
  cin>>N>>M;
  
  long long int odd1,odd2,even1,even2;
  
  odd1= N/2;
  even1= N/2;
  
  if( N%2==1)
    odd1++;
    
  odd2=M/2;
  even2=M/2;
  
  if(M%2==1)
    odd2++;  
	 
  long long int x=odd1*even2+odd2*even1;
  long long int y=M*N;
  
  //cout<<odd1<<" "<<even1<<" "<<odd2<<" "<<even2<<endl;
  long long int g=gcd(x,y);
  
  cout<<x/g<<"/"<<y/g<<endl;	 
}


}
