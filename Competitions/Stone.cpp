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
using namespace std;

int main()
{


long long int N,K;
long long int i,j;

cin>>N>>K;

long long int a[N];

long long int min=std::numeric_limits<int>::max(),max=std::numeric_limits<int>::min();


for(i=0;i<N;i++)
{
  cin>>a[i];
  
  if(a[i]<min)
  {
     min = a[i];
  }
  
  else if (a[i]>max)
  {
     max=a[i];
  }
}

long long int first= max;
long long int second = max-min;


if( K && K%2 == 0)
{
    for(i=0;i<N;i++)
    {
       a[i]=second-first+a[i];
    }  
}

else if (K)
{
    for(i=0;i<N;i++)
    {
       a[i]=first-a[i];
    }     
}


for(i=0;i<N;i++)
    {
       cout<<a[i]<<" ";
    } 
    
}

