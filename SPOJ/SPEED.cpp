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
#include<set>
using namespace std;

#define gc getchar

void scanint(  int &x)
{
    register  int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

void mod(int &x)
{
   x=x>0?x:-x;
}

int gcd(int a, int b)
{
int c=a%b;

while(c!=0)
{
   a=b;
   b=c;
   c=a%b;
}

return b;

}



int main()
{

int T;
cin>>T;

int a,b,ans;

while(T--)
{
  cin>>a>>b;
  
  if(a > b) 
			ans = a - b;
   else
			ans = b - a;
			
  mod(a);
  mod(b);

  ans=ans/gcd(a,b);
  
  cout<<ans<<endl;
}

}
