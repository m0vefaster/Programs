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

int N;
int i,j;


cin>>N;

int a[N];


for(i=0;i<N;i++)
{
   cin>>a[i];
}


int count=0;
int maxCount=0;
for(i=0;i<N;i++)
{
   if(a[i]==0)
     {
        if(count> maxCount)
          maxCount=count;
         
		count=0;  
     }
     
   else 
     count++;  
}

if(count > maxCount)
  maxCount=count;

cout<<maxCount;

}
