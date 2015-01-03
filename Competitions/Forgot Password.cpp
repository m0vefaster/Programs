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


int main()
{

long long int T,i,j;

long long int N;

cin>>T;

while(T--)
{

cin>>N;

pair<char,char> p[N];

  i=0;
  while(i<N)
  {
     char x,y;
     cin>>x>>y;
     
     p[i]=make_pair(x,y);
     i++;
  }
  
string s;
cin>>s;
  i=0;
  while(i<N)
  {
     s.replace(0,s.length(),p[i].first,p[i].second);
     i++;
  }
  
  cout<<s<<endl;
    
}

}
