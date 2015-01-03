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


int T;

cin>>T;

while(T--)
{
  int N;
  int i,j;
  
  cin>>N;
  
  int a[N];
  
  for(i=0;i<N;i++)
  {
    scanint(a[i]);
  }
  
  sort(a,a+N);
  
  i=0;
  j=N/2+1;
  
  while(i<=N/2 && j<N)
  {
    cout<<a[i]<<" "<<a[j]<<" ";
    i++;
    j++;
  }
  
  while(i<=N/2)
  {
    cout<<a[i]<<" ";
    i++;
  }
  
  while(j<N)
  {
    cout<<a[j]<<" ";
    j++;
  }  
  
  cout<<endl;
}


}
