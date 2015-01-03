#include<iostream>
#include<stdio.h>
#include <algorithm>
#include<math.h>
#include<string.h>
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

/*
#define gc getchar

void scanint( int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

*/

int main()
{
int N;
int i,j,k;
vector<int> v1;
vector<int> v2;

cin>>N;
int x[N];


for(i=0;i<N;i++)
{
  cin>>x[i];
}


for(i=0;i<N;i++)
 {
    for(j=0;j<N;j++)
    {
       for(k=0;k<N;k++)
       {
          v1.push_back((x[i]*x[j])+x[k]);
          
          if(x[k]!=0)
             v2.push_back((x[i]+x[j])*x[k]);

       }
    }
 } 
 
 
 sort(v1.begin(),v1.end());
 sort(v2.begin(),v2.end());
 
 /*for (vector<int>::iterator it = v1.begin() ; it != v1.end(); ++it)
    std::cout << ' ' << *it;
 cout<<"\n";   
    
  for (vector<int>::iterator it= v2.begin() ; it != v2.end(); ++it)
    std::cout << ' ' << *it;
 cout<<"\n";*/   
        
 long long int count=0;
 
 for(i=0;i<v1.size();i++)
 {
   int lo=lower_bound (v2.begin() ,v2.end() , v1[i]) -v2.begin();

   int hi=upper_bound (v2.begin(), v2.end(),  v1[i]) -v2.begin();

   count+=(hi-lo);
      
   
 } 
 cout<<count;
 

 
}
