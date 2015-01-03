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


int main()
{

int c;
cin>>c;
while(c--)
{
  int N,F,K,T;
  
  //cin>>N>>K>>T>>F;
  scanint(N);
  scanint(K);
  scanint(T);
  scanint(F);
  cout<<(F*K-N)/(K-1)<<endl;  
}

}
